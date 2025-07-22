#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionSort(int arr[],int size){
	for(int select=0;select<size-1;select++){
		int minIndex = select;
		for(int i=select+1;i<size;i++){
			if(arr[minIndex]>arr[i]){
				minIndex = i;
			}
		}
		int temp = arr[select];
		arr[select] = arr[minIndex];
		arr[minIndex] = temp;
	}
}


int main(){
	int numbers[] = {7,3,9,1,2};
	printArray(numbers,5);
	selectionSort(numbers,5);
	printArray(numbers,5);

	return 0;
}
