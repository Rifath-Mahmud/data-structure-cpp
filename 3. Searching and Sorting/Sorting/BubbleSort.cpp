#include <iostream>
using namespace std;

void printArray(int A[], int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout<<endl;
}

void bubbleSort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void bubbleSortOptimized(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-1-i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            cout<<"Early stop at i="<<i<<endl;
            break;
        }
    }
}

int main() {
    int A[5] = {1,6,4,3,5};
    int n = 5;

    cout<<"Unsorted Array:"<<endl;
    printArray(A, n);

    cout<<"Using Bubble Sort..."<<endl;
    bubbleSort(A, n);

    cout<<"Sorted Array:"<<endl;
    printArray(A, n);

return 0;
}
