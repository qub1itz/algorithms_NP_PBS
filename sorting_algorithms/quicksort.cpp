#include <iostream>
#include <math.h>

using namespace std;

void quick_sort(int*,int);

int main (void)
{
    int num;
	
	cout<<"Ile liczb chcesz posortować?: ";
    do
    {
	cin>>num;
    }
	while(num<=0);
	int tab[num];
	for(int i=0;i<num;i++)
    {
        cout<<"Podaj "<<i+1<<" element do posortowania: ";
		cin>>tab[i]; 
    }
	
    quick_sort(tab,num);
	
    cout<<"Elementy posortowane to: "<<endl;
	
for(int i=0;i<num;i++)
    {
	cout<<tab[i]<<" "<<endl; //wypisanie posortowanych elementów w osobnym rzędzie
    }
return 0;
	
}
void quick_sort(int* tab, int num)
{
    int pivot=0;
    for(int i=0;i<num;i++)
    {
        for(int j=num;j>0;j--)
        {
            if(i==j)
            {
               pivot=i;      //ustaw pivota na środku
               break; 
            }
        }
    }
    for(int i=0;i<pivot;i++)
    {
        for(int j=pivot-1;j>i;j--)        //przeszukaj lewą stronę- elementy mniejsze od pivota
        {
            if(tab[i]>tab[j])     //elementy mniejsze od pivota
            {
                swap(tab[i],tab[i+1]);
            }
            if(i==j)      //jezeli wszystkie elementy zostały porównane
            {
                break;
            }
        }
    }
    for(int i=pivot;i<num;i++)
    {
        for(int j=number-1;j<num;j--)  //przeszukaj prawą stronę od pivota
        {
            if(tab[i]>tab[j])
            {
                swap(tab[i],tab[j]);
            }
            if(i==j)
                
    }
    if(num==0)
    {
        return;
    }
    quick_sort(tab,log(num-1));
}
