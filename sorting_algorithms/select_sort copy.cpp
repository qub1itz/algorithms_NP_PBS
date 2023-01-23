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
        cout << "Wprowadz liczbę do ",i+1, " elementu w tablicy: "
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

    for(int i=0; i<x;i++) //wypisywanie
    {
        cout << tab[i];
    }

    return 0;
} 
