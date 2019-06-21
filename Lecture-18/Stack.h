#include "node.h"
#include <iostream>
using namespace std;
template<typename T>
class Stack{
	node<T> *head;
public:
	Stack(){
		head=NULL;
	}

	void push(T d){
		if(head==NULL){
			node<T>* n = new node<T>(d);
			head =n;
		}
		else{
			node<T>* n=new node<T>(d);
			n->next = head;
			head=n;
		}
	}

	void pop(){
		if(head!=NULL){
			node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}

	int size(){
		int count = 0;
		node<T>* temp=head;
		while(temp){
			count++;
			temp=temp->next;
		}
		return count;
	}

	bool empty(){
		return head==NULL;
	}

	T top(){
		return head->data;
	}

};






