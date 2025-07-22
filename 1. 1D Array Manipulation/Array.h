#include<iostream>
using namespace std;

class Array{
	private:
		int size;
		int length=0;
		int *arr;

	public:
		Array(const int size){
			this->size = size;
			arr = new int[size];
			initArray(0);
		}

		Array(const int size, int v): Array(size){
			initArray(v);
		}

		void initArray(int v){
			for(int i=0;i<size;i++){
				arr[i] = v;
			}
		}

		int getLength(){
			return length;
		}

		int at(int pos){
			if(pos>=0 && pos<length)
				return arr[pos];
		}

		bool isEmpty(){
			if(length==0){
				return true;
			}
			else{
				return false;
			}
		}

		bool isFull(){
			if(length == size){
				return true;
			}
			else{
				return false;
			}
		}

		void print(){
			if(!isEmpty()){
				for(int i=0;i<length;i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else{
				cout<<"Empty Array"<<endl;
			}
		}

		void insert(int v){
			if(!isFull()){
				arr[length++] = v;
			}
			else{
				cout<<"Insertion Failed, Array is Full"<<endl;
			}
		}

		void insertAt(int pos, int v){
			if(pos>=0 && pos<length && !isFull()){
				for(int i=length;i>=pos;i--){
					arr[i+1] = arr[i];
				}
				arr[pos] = v;
				length++;
			}
			else{
				cout<<"Insertion Failed, Invalid Position"<<endl;
			}
		}

		void replaceAt(int pos,int v){
			if(pos>=0 && pos<length){
				arr[pos] = v;
			}
			else{
				cout<<"Insertion Failed, Invalid Position"<<endl;
			}
		}

		void remove(){
			if(!isEmpty()){
				length--;
			}
			else{
				cout<<"Empty Array"<<endl;
			}
		}
		void removeAt(int pos){
			if(pos>=0 && pos<length && !isEmpty()){
				for(int i=pos;i<length-1;i++){
					arr[i] = arr[i+1];
				}
				remove();
			}
			else{
				cout<<"Failed to Remove, Invalid Position or Empty Array"<<endl;
			}
		}

		void clear(){
			initArray(0);
			length=0;
		}

		void reverseArray(){
			for(int i=0;i<length/2;i++){
				int temp = arr[i];
				arr[i] = arr[length-1 - i];
				arr[length-1 - i]=temp;
			}
		}

		void copyArray(int data[],int n){
			if(n<size){
				clear();
				for(int i=0;i<n;i++){
					insert(data[i]);
				}
			}
		}

		void bubbleSort(){
			bool nextPass;
			for(int i=0;i<length;i++){
				nextPass = false;
				for(int j=0;j<length-i -1;j++){
					if(arr[j]>arr[j+1]){
						int temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
						nextPass = true;
					}
				}
				if(!nextPass){break;}
			}
		}

		~Array(){
			delete []arr;
		}
};
