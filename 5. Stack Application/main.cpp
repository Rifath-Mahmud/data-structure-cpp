#include<iostream>
#include "Stack.h"
using namespace std;

bool isOperand(char c){
	if(c>='A' && c<='Z' ||
		c>='a' && c<='z' ||
		c>='0' && c<='9'){
		return true;
	}
	else return false;
}

int getPriority(char c){
	if(c == '+' || c == '-'){
		return 1;
	}
	else if(c == '*' || c == '/'|| c == '%'){
		return 2;
	}
}

int main(){

	Stack<char> s(10);

	string infix = "2*3/(2-1)+5*3";
	string postfix = "";

	//step 6
	for(int i=0;i<infix.length();i++){
		//step 1

		//step 2
		if(isOperand(infix[i])){
			postfix+= infix[i];
		}
		//step 3
		else if(infix[i] == '('){
			s.push(infix[i]);
		}
		//step 4
		else if(infix[i] == ')'){
			//step 4.1
			while(s.topElement()!= '('){
				postfix+= s.topElement();
				s.pop();
			}
			//step 4.2
			s.pop();
		}
		//step 5
		else if(infix[i] == '+' ||
				infix[i] == '-' ||
				infix[i] == '*' ||
				infix[i] == '/' ||
				infix[i] == '%'){
				while(true){
					if(s.isEmpty()){
						s.push(infix[i]);
						break;
					}
					else if(s.topElement() == '('){
						s.push(infix[i]);
						break;
					}
					else if(getPriority(infix[i]) > getPriority(s.topElement())){
						s.push(infix[i]);
						break;
					}
					else{
						postfix+= s.topElement();
						s.pop();
						//repeat step 5
					}
				}
		}
	}

	//step 7
	while(!s.isEmpty()){
		postfix+= s.topElement();
		s.pop();
	}

	cout<< postfix <<endl;

	return 0;
}
