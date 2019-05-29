// SumOfTheArrays
#include <iostream>
using namespace std;

int SUM(int *a,int n){
	// cout<<"Pointer size : "<<sizeof(a)<<endl;
	int ans = 0;
	
	for(int i=0;i<n;i++){
		ans = ans + *(a+i);
	}
	return ans;
}

int main(){
	int a[]={1,2,3,4,5};
	// cout<<"Array size : "<<sizeof(a)<<endl;
	int n=sizeof(a)/sizeof(int);
	cout<<SUM(a,n);	
	cout<<SUM(a+2,n-2);	
    







	cout<<endl;
	return 0;
}