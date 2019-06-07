// SumOfArray
#include <iostream>
using namespace std;

int SUM(int *a,int n){
	// base case
	if(n==0){
		return 0;
	}
	int ChotaSum = SUM(a+1,n-1);
	int BadaSum = a[0] + ChotaSum;
	return BadaSum;
}

int SUM1(int *a,int n,int i){
	// base case
	if(i==n){
		return 0;
	}
	// Resursive case
	int ChotaAns = SUM1(a,n,i+1);
	int BadaAns = a[i]+ChotaAns;
	return BadaAns;
}

int SUM2(int *a,int n,int i){
	// base case
	if(i==0){
		return 0;
	}
	// Recursive case
	int ChotaAns = SUM2(a,n,i-1);
	int BadaAns = a[i-1]+ ChotaAns;
	return BadaAns;
}




int main(){
	int a[]={1,2,3,4,5};
	int n= sizeof(a)/sizeof(int);
    cout<<SUM(a,n)<<endl;
    cout<<SUM1(a,n,0)<<endl;
    cout<<SUM2(a,n,n)<<endl;
	cout<<endl;
	return 0;
}