#include <iostream>
using namespace std;
void bubble_sort(int tab[], int n){
  cout<<"Sorted numbers: "<<endl;
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
  int num;
  cout<<"Wpisz ile liczb chcesz posortowac: ";
  cin>>num;
  for (int i=0;i<num;i++)
  {
    cout<<"Wpisz liczbe: ";
    cin>>tablica[i];
  }
  int tablica [num];
  bubble_sort(tablica[],num);
  
  return 0;
}
