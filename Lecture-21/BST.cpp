#include <iostream>
#include <queue>
#include <cmath>
#include <climits>
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

node* SearchInBst(node* root,int key){
	// Base Case
	if(root==NULL){
		return NULL;
	}

	// Recursive case
	if(root->data == key){
		return root;
	}
	else if(root->data<key){
		return SearchInBst(root->right,key);
	}
	else{
		return SearchInBst(root->left,key);
	}
}

int height(node* root){
	if(root==NULL){
		return 0;
	}

	int leftKiHeight = height(root->left);
	int rightKiHeight = height(root->right);
	return 1+max(leftKiHeight,rightKiHeight);
}
// 8 3 10 1 6 14 4 7 13 9 -1
bool isBalanced(node* root){
	// Base case
	if(root==NULL){
		return true;
	}
	// Recursive case
	if(isBalanced(root->left)&&isBalanced(root->right)&&(abs(height(root->left)-height(root->right))<=1)){
		return true;
	}
	else{
		return false;
	}
}

bool isBST(node* root,int min=INT_MIN,int max=INT_MAX){
	// Base case
	if(root==NULL){
		return true;
	}

	// Recursive case
	if((root->data<=max && root->data>=min)&&isBST(root->left,min,root->data)&&isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}


int main(){
	node* root = CreateTree();

	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;
	PrintLevelOrder(root);

	if(isBST(root)){
		cout<<"BST"<<endl;
	}
	else{
		cout<<"Not BST"<<endl;
	}


	return 0; 
}