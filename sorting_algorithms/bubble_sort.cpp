#include <iostream>

using namespace std;

void bubble_sort(int tab[], int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=1; j<n; j++)
    {
      if(tab[j]>tab[j-1])
      {
        swap(tab[j],tab[j-1]);
      }
    }
  }
  
  cout<<"Posortowane liczby: "<<endl;
  for(int k=0; k<n; k++) //wypisanie posortowanych liczb
  {
    cout<<tab[k]<<"\t";
  }
}

int main()
{
  return 0;
}
