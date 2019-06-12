// DynamicAllocation
#include <iostream>
using namespace std;

int* CreateArray(int n){

	int *a = new int[n];
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	return a;
}

int main(){
	int n;
	cin>>n;
	int *arr =CreateArray(n);

	for(int i=0;i<n;i++){
		arr[i]=i;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete []arr;
	
	// int *a = new int;
	// *a = 10;


	// cout<<*a<<endl;

	// delete a;

	return 0;
}