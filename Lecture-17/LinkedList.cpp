// LinkedList
#include <iostream>
using namespace std;

// -------- BLUEPRINT -----------
class node{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){}
};
// -------------------------------

int length(node* head){
	int i=0;
	while(head!=NULL){
		i++;
		head=head->next;
	}
	return i;
}


void InsertAtFront(int data,node* &head,node* &tail){
	if(head == NULL){
		node* n = new node(data);
		head = tail = n;
	}
	else{
		node* n = new node(data);
		n->next = head;
		head= n;
	}
}

void InsertAtEnd(int data,node* &head,node* &tail){
	if(head == NULL){
		node *n=new node(data);
		head=tail=n;
	}
	else{
		node* n =new node(data);
		tail->next = n;
		tail = n;
	}
}

void InsertAtMid(int data,int pos,node* &head,node* &tail){
	if(pos == 0){
		InsertAtFront(data,head,tail);
	}
	else if(pos>=length(head)){
		InsertAtEnd(data,head,tail);
	}
	else{
		node* temp = head;
		int p = 1;
		while(p<=pos-1){
			temp = temp->next;
			p++;
		}
		node* n = new node(data);
		n->next = temp->next;
		temp->next=n;
	}
}

node* SearchLL(int key,node* head){
	while(head!=NULL){
		if(head->data == key){
			return head;
		}
		head = head->next;
	}
	return NULL;
}
void DeleteAtFront(node* &head,node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		head = head->next;
		delete temp;
	}
}
void DeleteAtEnd(node* &head,node* &tail){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp= head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail = temp;
		tail->next = NULL;
	}	
}
void DeleteAtMid(int pos,node* &head,node* &tail){
	if(pos==0){
		DeleteAtFront(head,tail);
	}
	else if(pos>=length(head)){
		DeleteAtEnd(head,tail);
	}
	else{
		node* temp = head;
		int p = 1;
		while(p<=pos-1){
			temp = temp->next;
			p++;
		}
		node* temp1 = temp->next;
		temp->next = temp1->next;
		delete temp1;
	}
}


node* SearchLLR(int key,node* head){
	// Base case
	if(head==NULL){
		return NULL;
	}

	// Recursive case
	if(head->data == key){
		return head;
	}
	node* baakiKiListSeBatao = SearchLLR(key,head->next);
	return baakiKiListSeBatao;
}

void Print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

void ReverseLL(node* &head,node* &tail){
	node* current=head;
	node* prev=NULL;
	node* next;

	while(current){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	tail = head;
	head = prev;
	return;
}


int main(){
	node* head=NULL;
	node* tail=NULL;

	InsertAtFront(0,head,tail);
	InsertAtFront(1,head,tail);
	InsertAtFront(2,head,tail);
	InsertAtFront(3,head,tail);
	InsertAtFront(4,head,tail);
	Print(head);
	ReverseLL(head,tail);
	Print(head);
	ReverseLL(head,tail);
	Print(head);



	return 0;
}