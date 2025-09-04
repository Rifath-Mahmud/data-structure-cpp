#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
	LinkedList<int> myList;

	myList.insertAtFirst(10);
	myList.insertAtFirst(20);
	myList.insertAtFirst(30);
	myList.insertAtFirst(40);
	myList.insertAtLast(50);
	myList.insertAtLast(60);

	cout<<"Current Length of The List: "<<myList.length()<<endl;
	myList.show();

	cout<<"Element at Index 4 : "<<myList.at(4)<<endl;

	myList.deleteAtFirst();
	myList.deleteAtFirst();
	myList.show();


	LinkedList<string> stringList;
	stringList.insertAtFirst("Hello");
	stringList.insertAtLast("World");
	stringList.insertAtFirst("of");
	stringList.insertAtFirst("C++");
	stringList.show();
return 0;
}
