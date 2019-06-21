// ReverseStack
#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s,int topElement){
	if(s.empty()){
		s.push(topElement);
		return;
	}
	int top=s.top();
	s.pop();
	pushBottom(s,topElement);
	s.push(top);
}
void ReverseStack(stack<int> &s){
	if(s.empty()){
		return;
	}
	int topElement = s.top();
	s.pop();
	ReverseStack(s);
	pushBottom(s,topElement);
}

void Print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;	
}

int main(){
	stack<int> s;
	s.push(6);
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	Print(s);
	ReverseStack(s);
	Print(s);
	return 0; 
}