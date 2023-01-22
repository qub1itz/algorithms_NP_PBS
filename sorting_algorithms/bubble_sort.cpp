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
  int numbers;
  cout<<"Wpisz ile liczb chcesz posortowac: ";
  cin>>numbers;
  for (int i=0;i<numbers;i++)
  {
    cout<<"Wpisz liczbe: ";
    cin>>tablica[i];
  }
  int tablica [numbers];
  bubble_sort(tablica,numbers);
  
  return 0;
}
