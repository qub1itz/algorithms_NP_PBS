#include <iostream>
using namespace std;

int main() //sortowanie przez wybor
{
    int x;
    cout << "ile liczb chcesz wprowadzić?";
    cin >> x;
    int tab[x];

    for(int i = 0; i < x; i++) // petla wprowadzania tab
    {
        cout << "wprowadz liczbę:";
        cin >> tab[i];
    }

    int min;
    for(int j = 0; j < x - 1; j++)
    {
        min = j;
        
        for(int i = j+1; i < x; i++) // szukanie najmniejszej liczby
        {
            if (tab[i] < tab[min])
            {
                min = i;
            }
        }
        int tmp=tab[j];
        tab[j]=tab[min];
        tab[min]=tmp;
    }
    for(int k=0; k<x;k++)   // wypisanie posortowanych liczb
    {
        cout << tab[k] <<" ";
    }

    return 0;
} 
