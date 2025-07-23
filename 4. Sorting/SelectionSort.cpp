#include <iostream>
using namespace std;

void printarray(int a[], int n){
    for (int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int a[],int n){
    int element,select,i;
    for(select=0;select<n-1;select++){
        element=select;
        for(i=select+1;i<n;i++){
            if(a[i] < a[element]){
                element=i;
            }
        }
        int temp = a[select];
        a[select]= a[element];
        a[element]= temp;
    }
}

int main()
{
    int a[10]= {6,8,2,9,1,0,3,4,7,5};
    int n= 10;
    cout<<"Unsorted Array:"<<endl;
    printarray(a,n);

    cout<<"Using Selection Sort..."<<endl;
    selectionSort(a,n);

    cout<<"Sorted Array:"<<endl;
    printarray(a,n);

    return 0;
}
