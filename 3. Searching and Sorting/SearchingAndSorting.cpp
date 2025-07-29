#include<iostream>
using namespace std;

void printArray(int a[],int size){
	for(int i=0;i< size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int linearSearch(int arr[],int size,int key){
	int index = -1;
	for(int i=0;i< size;i++){
		if(arr[i] == key){
			index = i;
			break;
		}
	}
	return index;
}

int binarySearch(int arr[],int size,int key){
	int l = 0;
	int r = size-1;

	while(l<=r){
		int m = (l+r)/2;
		if(arr[m] == key){
			return m;
		}
		else if(key> arr[m]){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	return -1;
}

void bubbleSort(int arr[],int size){
	for(int pass=0;pass<size-1;pass++){
		bool swapped = false;
		for(int j=0;j<size-1 -pass;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			}
		}
		if(!swapped){break;}
	}
}

void insertionSort(int arr[],int size){
	for(int j=1;j<size;j++){
		int v = arr[j];
		int i = j-1;
		while(v<arr[i] && i>=0){
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = v;
	}
}

int main(){
	int arr[7] = {1,7,9,12,15,23,25};
	printArray(arr,7);
	cout<< "Index of 23 using Liner Search:"<<linearSearch(arr,7,23)<<endl;
	cout<< "Index of 23 using Binary Search:"<<binarySearch(arr,7,23)<<endl;


	int data[10] = {11,17,91,112,51,123,25,30,45,20};
	printArray(data,10);
	//bubbleSort(data,10);
	insertionSort(data,10);
	printArray(data,10);



return 0;
}
