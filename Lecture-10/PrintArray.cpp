// PrintArray
#include <iostream>
using namespace std;

void Print(int *a,int n){
	if(n==0){
		return;
	}

	cout<<a[0]<<" ";
	Print(a+1,n-1);
}

void PrintReverse(int *a,int n){
	// base case
	if(n==0){
		return;
	}
	// Recursive case
	cout<<a[n-1]<<" ";
	PrintReverse(a,n-1);

}


int main(){
	int a[]={1,2,3,4,5,6};
	int n = sizeof(a)/sizeof(int);

	Print(a,n);
	cout<<endl;
	PrintReverse(a,n);
    
	cout<<endl;
	return 0;
}