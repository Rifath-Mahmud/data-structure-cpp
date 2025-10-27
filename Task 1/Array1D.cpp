#include<iostream>
using namespace std;

void print1DArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int find(int arr[],int size, int key){
	for(int i=0;i<size;i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int main(){

	int numbers[5] = {11,12,13,14,15};
	print1DArray(numbers,5);
	print1DArray(numbers,5);
	print1DArray(numbers,5);
	print1DArray(numbers,5);

	cout<< find(numbers,5,13)<<endl;
	cout<< find(numbers,5,20)<<endl;
return 0;
}
