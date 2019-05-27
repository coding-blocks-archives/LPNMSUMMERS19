// Arrays_Functions
#include <iostream>
using namespace std;

void Print(int a[],int n){

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return;
}


int SUM(int a[],int n){
	int ans = 0;
	for(int i=0;i<n;i++){
		ans = ans + a[i];
	}
	return ans;
}

int main(){
	int a[5]={1,2,3,4,5};
	int n=5;
	// Array is passed by its name and along with array
	// we need to pass the size of the array as well
	Print(a,n);

	cout<<endl<<SUM(a,n);
    
	cout<<endl;
	return 0;
}