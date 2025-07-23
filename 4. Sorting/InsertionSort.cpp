#include <iostream>
using namespace std;

void printarray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int a[], int n){
    int i, j, key;
    for(i = 1; i < n; i++){
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] < key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main(){
  int a[10] ={5,9,8,2,7,4,3,0,1,6};
  int n = 10;

  cout<<"Unsorted Array:"<<endl;
  printarray(a,n);

  cout<<"Using Insertion Sort..."<<endl;
  insertionSort(a,n);

  cout<<"Sorted Array:"<<endl;
  printarray(a,n);

  return 0;
}
