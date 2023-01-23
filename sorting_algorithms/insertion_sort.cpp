#include <iostream>
#include <fstream>

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
    int help, j;
    for(int i=0; i<n; i++)
    {
        help = tab[i];
        j = i-1;
        while(j>=0 && tab[j]>help)
        {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = help;
    }
    //KONIEC ALGORYTMU

    cout << "Liczby po sortowaniu: " << endl;

    for(int j=0; j<n; j++)  //wypisanie liczb posortowanych
    {
        cout<<j+1<<" liczba to: ";
        cout <<tab[j]<<" ";
    }
    cout<<endl;

    
    return 0;
}
