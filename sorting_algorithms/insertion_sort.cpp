#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    do 
    {
        cout<<"Wpisz ile liczb chcesz posortować: ";
        cin>>n;          //uzytkownik wpisuje ile liczb chce posortowac
    }while(n<0);
    int tab[n];
    int element;

    cout << "Liczby przed sortowaniem: " << endl; //wypisanie liczb przed sortowaniem
    for (int i=0;i<n;i++)
    {
        cout<<tab[i]<<" ";
    }

    cout << " " << endl;
    cout << " " << endl;

    //ALGORYTM SORTOWANIA PRZEZ WSTAWIANIE
    int pomoc, j;
    for(int i=0; i<n; i++)
    {
        pomoc = tab[i];
        j = i-1;
        while(j>=0 && tab[j]>pomoc)
        {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = pomoc;
    }
    //KONIEC ALGORYTMU

    cout << "Liczby po sortowaniu: " << endl;

    for(int i=0; i<n; i++)  //wypisanie liczb posortowanych
    {
        cout <<tab[i]<<" ";
    }

    return 0;
}
