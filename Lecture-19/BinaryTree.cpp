#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){}
};

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

node* CreateTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}

	node* root = new node(d);
	root->left=CreateTree();
	root->right=CreateTree();
	return root;
}

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

int CountNodes(node* root){
	if(root==NULL){
		return 0;
	}
	return 1+CountNodes(root->left)+CountNodes(root->right);
}

int height(node* root){
	if(root==NULL){
		return 0;
	}

	int leftKiHeight = height(root->left);
	int rightKiHeight = height(root->right);
	return 1+max(leftKiHeight,rightKiHeight);
}


int main(){

	node* root=NULL;

	root= CreateTree();
	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	cout<<"No of Nodes : "<<CountNodes(root)<<endl;
	cout<<"Height : "<<height(root)<<endl;





	return 0; 
}