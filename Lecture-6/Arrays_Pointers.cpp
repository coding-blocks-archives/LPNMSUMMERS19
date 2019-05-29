// Arrays_Pointers
#include <iostream>
using namespace std;

void Print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void Print1(int *a,int n){
	for(int i=0;i<n;i++){
		// cout<<a[i]<<" ";
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}

int main(){
	int a[]={1,2,3};
	cout<<a<<endl;
	cout<<a+1<<endl;
	cout<<&a<<endl;
	cout<<&a+1<<endl;

	// int n=sizeof(a)/sizeof(int);

	// Print(a,n);
	// Print1(a,n);
    
	cout<<endl;
	return 0;
}