#include <iostream>
using namespace std;

void BubbleSort(int *a,int n,int i){
	// base case
	if(i==n-1){
		return;
	}
	// Recursive case
	for(int k=0;k<=n-2;k++){
		if(a[k]>a[k+1]){
			swap(a[k],a[k+1]);
		}
	}
	BubbleSort(a,n,i+1);
}

void BubbleSort1(int *a,int n,int i,int k){
	// base case
	if(i==n-1){
		return;
	}
	// Recursive case
	if(k==n-1){
		BubbleSort1(a,n,i+1,0);
	}
	else{
		if(a[k]>a[k+1]){
			swap(a[k],a[k+1]);
		}
		BubbleSort1(a,n,i,k+1);
	}
}


int main(){
	int a[]={7,6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	BubbleSort1(a,n,0,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}