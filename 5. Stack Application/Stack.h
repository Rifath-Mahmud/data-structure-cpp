#ifndef MY_STACK

#define MY_STACK
#include<iostream>
using namespace std;

template<typename T>
class Stack{
private:
	T* arr;
	int size;
	int top = 0;
public:
	Stack(){
		arr = new T[5];
	}
	Stack(int size){
		arr = new T[size];
		this->size = size;
	}

	bool isFull(){
		return (top >= size);
	}
	bool isEmpty(){
		return (top==0);
	}

	void push(T data){
		if(!isFull()){
			arr[top] = data;
			top++;
		}
		else{
			cout<<"Stack Overflow.! Failed to Store: "<<data<<endl;
		}
	}

	void pop(){
		if(!isEmpty()){
			top--;
		}
		else{
			cout<<"Stack underflow.!"<<endl;
			throw::underflow_error("Stack is Empty");
		}
	}

	T topElement(){
		if(!isEmpty()){
			return arr[top-1];
		}
		throw::underflow_error("Stack is Empty");
	}

	void clear(){
		top = 0;
	}

	void show(){
		for(int i=0;i<top;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

};

#endif
