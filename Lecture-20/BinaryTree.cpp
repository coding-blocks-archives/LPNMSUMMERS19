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

int Diameter(node* root){
	// Base case
	if(root==NULL){
		return 0;
	}

	// Recursive case
	int op1 = height(root->left)+height(root->right);
	int op2 = Diameter(root->left);
	int op3 = Diameter(root->right);
	return max(op1,max(op2,op3));
}

class Pair{
public:
	int dia;
	int height;
};

Pair fastDiameter(node* root){
	Pair p;
	// Base case
	if(root==NULL){
		p.height = p.dia = 0;
		return p;
	}
	// Recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);
	// Find the height of the tree
	p.height = max(left.height,right.height)+1;

	int op1 = left.height+right.height;
	int op2 = left.dia;
	int op3 = right.dia;

	p.dia = max(op1,max(op2,op3));
	return p;
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

void Mirror(node* root){
	// Base Case
	if(root==NULL){
		return;
	}
	// Recursive case
	swap(root->left,root->right);
	Mirror(root->left);
	Mirror(root->right);
}
node* LevelOrderInput(){
	node* root = NULL;
	cout<<"Enter Root Node : ";

	int data;
	cin>>data;
	root = new node(data);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		cout<<"Enter children of "<<temp->data;
		int c1,c2;
		cin>>c1>>c2;
		if(c1!=-1){
			temp->left = new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right = new node(c2);
			q.push(temp->right);
		}
	}
	return root;
}

int i = 0;

node* MakeTree(int *in,int* pre,int s,int e){
	// Base case
	if(s>e){
		return NULL;
	}
	// Recursive case
	// Pick the ith preorder data and make it the root node
	int data = pre[i];
	i++;
	node* root = new node(data);
	// Search the data in INORDER of the tree
	int k =-1;
	for(int j=s;j<=e;j++){
		if(in[j] == data){
			k = j;
			break;
		}
	}
	root->left = MakeTree(in,pre,s,k-1);
	root->right = MakeTree(in,pre,k+1,e);
	return root;
}

int main(){

	node* root=NULL;
	int pre[]={8,10,1,6,4,7,3,14,13};
	int in[]={1,10,4,6,7,8,3,13,14};

	root= MakeTree(in,pre,0,8);
	// root = LevelOrderInput();
	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	// cout<<"No of Nodes : "<<CountNodes(root)<<endl;
	// cout<<"Height : "<<height(root)<<endl;
	// cout<<"Diameter : "<<Diameter(root)<<endl;

	// Pair p = fastDiameter(root);
	
	// cout<<"Fast Height : "<<p.height<<endl;
	// cout<<"Fast Diameter : "<<p.dia<<endl;
	PrintLevelOrder(root);
	Mirror(root);
	PrintLevelOrder(root);



	return 0; 
}