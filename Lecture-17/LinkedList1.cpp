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

void InsertAtFront(node* &head,int data){
	if(head==NULL){
		head = new node(data);
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void ReverseLL(node* &head){
	node* current=head;
	node* prev=NULL;
	node* next;

	while(current){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return;
}

void Print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

node* mid(node* head){
	node* slow = head;
	node* fast = head->next;

	while(fast){
		fast = fast->next;
		if(fast!=NULL){
			fast=fast->next;
			slow=slow->next;
		}
	}
	return slow;
}

void BubbleSortLL(node* &head){
	node* current,*prev,*n;

	int len = length(head);

	for(int i=0;i<=len-2;i++){
		current = head;
		prev = NULL;
		while(current && current->next){
			n = current->next;
			if(current->data>n->data){
				if(prev == NULL){
					current->next = n->next;
					n->next = current;
					head = prev = n;
				}
				else{
					current->next = n->next;
					n->next = current;
					prev->next=n;
					prev = n;
				}
			}
			else{
				prev = current;
				current = current->next;
			}
		}
	}
	return;
}

node* merge(node* a,node* b){
	// Base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	// Recursive Search
	node* c;
	if(a->data<b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c=b;
		c->next = merge(a,b->next);
	}
	return c;
}
node* MergeSortLL(node* head){
	// Base case
	if(head==NULL || head->next == NULL){
		return head;
	}
	// Recursive case
	// Divide
	node* m = mid(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;
	// Sort
	a = MergeSortLL(a);
	b = MergeSortLL(b);
	// Merge
	node* NayaHead = merge(a,b);
	return NayaHead;
}

void CreateCycle(node* head){
	node* temp = head;
	while(temp->next!=NULL){
		temp= temp->next;
	}
	temp->next = head->next->next;
}

bool DetectCycle(node* head){
	node* slow = head;
	node* fast = head;
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast = fast->next;
			slow = slow->next;
			if(slow == fast){
				return true;
			}
		}
	}
	return false;
}

int main(){
	node* head = NULL;
	node* head1 = NULL;

	InsertAtFront(head,1);
	InsertAtFront(head,2);
	InsertAtFront(head,3);
	InsertAtFront(head,4);
	InsertAtFront(head,5);
	InsertAtFront(head,6);
	InsertAtFront(head,7);
	InsertAtFront(head,8);
	// BubbleSortLL(head);
	Print(head);
	head = MergeSortLL(head);
	Print(head);
	if(DetectCycle(head)){
		cout<<"Cycle exists"<<endl;
	}
	else{
		cout<<"Cycle Donot exists"<<endl;
	}

	CreateCycle(head);
	if(DetectCycle(head)){
		cout<<"Cycle exists"<<endl;
	}
	else{
		cout<<"Cycle Donot exists"<<endl;
	}	
	// Print(head1);

	// node* ans = merge(head,head1);
	// Print(ans);





	return 0; 
}