#ifndef MY_LINKED_LIST
#define MY_LINKED_LIST
#include<iostream>
using namespace std;

template<typename T>
class LinkedList{
private:
	struct Node{
		T data;
		Node* next = nullptr;
		Node(T data){
			this->data = data;
		}
		Node(T data, Node* next){
			this->data = data;
			this->next = next;
		}
	};

	Node* head = nullptr;
	Node* curr = nullptr;
	int size = 0;

public:
	bool isEmpty(){
		return (head == nullptr);
	}

	T at(int index){
		if(!isEmpty() && index>=0&& index<size ){
			if(index == 0){
				return head->data;
			}
			else if(index == size-1){
				return curr->data;
			}
			else{
				Node* temp = head;
				for(int i=0;i<index;i++){
					temp = temp->next;
				}
				return temp->data;
			}
		}
	}
	void insertAtFirst(T v){
		head = new Node(v,head);
		if(curr == nullptr){
			curr = head;
		}
		size++;
	}

	void insertAtLast(T v){
		if(isEmpty()){
			insertAtFirst(v);
		}
		else{
			curr->next = new Node(v);
			curr = curr->next;
			size++;
		}
	}

	void insertAtIndex(int index, T v){
		//Try it yourself
	}

	void deleteAtFirst(){
		if(!isEmpty()){
			Node* temp = head;
			head = head->next;
			delete temp;
			size--;
			if(isEmpty()){
						curr = nullptr;
				}
		}
	}
	void deleteAtLast(){
		//Try it yourself
	}

	void deleteAtIndex(int index){
		//Try it yourself
	}

	int find(T v){
		//Try it yourself

		return -1;
	}

	void show(){
		Node* temp = head;
		while(temp!=nullptr){
			cout<<temp->data<<endl;
			temp = temp->next;
		}
	}

	int length(){
		return size;
	}

};

#endif
