#include <iostream>
using namespace std;
void bubble_sort(int tab[], int n){
  cout<<"Posortowane liczby: "<<endl;
  for(int i=0; i<n; i++){
    for(int j=1; j<n; j++){
      if(tab[j]>tab[j-1]){
        swap(tab[j],tab[j-1]);
      }
    }
  }
  
  for(int k=0; k<n; k++){
    cout<<tab[k]<<"\t";
  }
}
int main(){
  int liczby;
  cout<<"Wpisz ile liczb chcesz posortowac: ";
  cin>>liczby;
  for (int i=0;i<liczby;i++)
  {
    cout<<"Wpisz liczbe: ";
    cin>>tablica[i];
  }
  int tablica [liczby];
  bubble_sort(tablica,liczby);
  
  return 0;
}
