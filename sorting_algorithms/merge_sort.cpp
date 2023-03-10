#include<iostream>

void merge(int* , int, int, int);
void merge_sort(int* ,int, int);

using namespace std;

int main()
{
	int liczba;
	do
    {
        cout<<"Wprowadz liczby do posortowania: ";
        cin>>liczba;
    }
    while(liczba<=0);
    int tab[liczba],pom[liczba];
	
	for(int i=0;i<liczba;i++)
    {
        cout<<"Wprowadz "<<i+1<<" element: ";
		cin>>tab[i];
    }
	merge_sort(tab,0,liczba-1);
    cout<<"Posortowane liczby to: \n";
	for(int i=0;i<liczba;i++)
    {
		cout<<tab[i]<<" ";
    }
	
	return 0;
}


void merge_sort(int* tab,int lewy, int prawy)
{
	if(prawy<=lewy)   
    	{
        	return;                  //gdy mamy jeden element, to jest on juz posortowany
   	} 
	int srodek = (prawy+lewy)/2;       //znajdujemy srodek podtablicy
	merge_sort(tab, lewy, srodek);     //dzielimy tablice na czesc lewa i prawa
	merge_sort(tab, srodek+1, prawy);       
	merge(tab, lewy, srodek, prawy);        //scalamy dwie juz posortowane tablice
}


void merge(int* tab, int lewy, int srodek, int prawy) 
{
   int i = lewy, j = srodek + 1;  //i to pierwszy elelemnt w lewej, j to pierwszy element w prawej
   int pom[prawy-lewy];               
  for(int i = lewy;i<=prawy; i++)   
  {
    pom[i] = tab[i];        //cala tablica zostaje przypisana do tablicy pomocniczej
  }
  for(int k=lewy;k<=prawy;k++)      //sortowanie
  {
  if(i<=srodek)                     //wykonuje się tak długo poki nie skonczy sie lewa tablica
  {
    if(j <= prawy)                     
         if(pom[j]<pom[i])           //porownywanie elementow z lewej do prawej 
         {
             tab[k] = pom[j];   //jezeli prawy jest mniejszy od lewego to przepisuje go i przechodzi do nastepnego elementu
             j++;  
         }
         else
         {                      
             tab[k] = pom[i];       //jezeli nie to przepisuje lewy element
             i++;
         }
  
    else                    
    {
        tab[k] = pom[i++];      //uzupelnia 
    }
  }
  else //jeżeli skończy się jedna to druga normalnie się przepisze
  {
      tab[k] = pom[j++];
  }
  }
}
