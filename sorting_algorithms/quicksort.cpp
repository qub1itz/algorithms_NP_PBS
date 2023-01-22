#include<iostream>
#include <math.h>
using namespace std;
void quick_sort(int*,int);
int main (void)
{
    int number;
	
	cout<<"Ile liczb chcesz posortować? ";
    do
    {
	cin>>number;
    }while(number<=0);
	int tab[number];
	for(int i=0;i<number;i++)
    {
        cout<<"Podaj "<<i+1<<" element do posortowania: ";
		cin>>tab[i]; 
    }
    quick_sort(tab,number);
    cout<<"Elementy posortowane to: "<<endl;
	for(int i=0;i<number;i++)
    {
		cout<<tab[i]<<" "; //wypisanie posortowanych elementów
    }
	cout<<endl;
	return 0;
}
void quick_sort(int* tab,int number)
{
    int pivot=0;
    for(int i=0;i<number;i++)
    {
        for(int j=number;j>0;j--)
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
        for(int j=pivot-1;j>i;j--)        //przeszukaj lewą stronę- elemnety mniejsze od pivota
        {
            if(tab[i]>tab[j])     //elementy mniejsze od pivota
            {
                swap(tab[i],tab[i+1]);
            }
            if(i==j)      //jezeli wszystkie elementy zostały porowanane
            {
                break;
            }
        }
    }
    for(int i=pivot;i<number;i++)
    {
        for(int j=number-1;j<number;j--)  //przeszukaj prawą stronę od pivota
        {
            if(tab[i]>tab[j])
            {
                swap(tab[i],tab[j]);
            }
            if(i==j)
                {
                    break;
                }
        }
    }
    if(number==0)
    {
        return;
    }
    quick_sort(tab,log(number-1));


      
    

}
