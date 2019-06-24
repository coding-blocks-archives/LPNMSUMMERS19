#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){}
};


// PreOrder
void PreOrder(node* root){
	// Base case
	if(root == NULL){
		return;
	}
	// Recursive Case
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(node* root){
	if(root==NULL){
		return;
	}

	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}

void PostOrder(node* root){
	if(root==NULL){
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

node* InsertInBST(node* root,int data){
	// Base case
	if(root==NULL){
		root= new node(data);
		return root;
	}

	// Recursive case
	if(root->data<=data){
		root->right = InsertInBST(root->right,data);
	}
	else{
		root->left = InsertInBST(root->left,data);
	}
	return root;
}


node* CreateTree(){
	int data;
	cin>>data;
	node* root=NULL;
	while(data!=-1){
		root = InsertInBST(root,data);

		cin>>data;
	}
	return root;
}

void PrintLevelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}
int main(){
	node* root = CreateTree();

	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	PrintLevelOrder(root);


	return 0; 
}