#include<iostream>
using namespace std;
#include "Stack.h"
int main(){
	Stack<int> s1(10);
	s1.push(10);
	s1.push(11);
	s1.push(12);
	s1.push(13);
	s1.push(21);
	s1.push(32);
	s1.push(33);
	s1.push(34);
	s1.push(35);
	s1.push(36);

	s1.pop();
	s1.pop();

	s1.push(37);
	s1.push(38);
	s1.show();

	s1.clear();
	s1.push(100);
	s1.push(200);
	s1.show();
	s1.pop();
	//s1.pop();
	if(!s1.isEmpty()){
		cout<<s1.topElement()<<endl;
	}

	Stack<float> numbers(5);
	numbers.push(-1);
	numbers.push(-2);
	numbers.push(-30);
	numbers.push(50.5);
	numbers.show();

	Stack<string> names(10);
	names.push("One");
	names.push("New");
	names.push("Old");
	names.push("C++");
	names.show();

	return 0;
}
