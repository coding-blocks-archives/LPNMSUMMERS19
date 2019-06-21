#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
using namespace std;

class Stack{
	vector<int> v;
public:

	void push(int d){
		v.push_back(d);
	}

	void pop(){
		v.pop_back();
	}

	int top(){
		return v[v.size()-1];
	}

	bool empty(){
		return v.size()==0;
	}

	int size(){
		return v.size();
	}

};
#endif


