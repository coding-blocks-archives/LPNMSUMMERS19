// Check7
#include <iostream>
using namespace std;
bool Check7(int *a,int n,int i){
	// base case
	if(i==n){
		return false;
	}
	if(a[i]==7){
		return true;
	}
	return Check7(a,n,i+1);
}

int First7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		return i;
	}
	return First7(a,n,i+1);
}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		int ChotaIndex = i;
		int BadaIndex = last7(a,n,i+1);
		if(BadaIndex>ChotaIndex){
			return BadaIndex;
		}
		else{
			return ChotaIndex;
		}
	}
	return last7(a,n,i+1);

}

int main(){
	int a[]={1,2,5,8,9,4};
	int n=sizeof(a)/sizeof(int);
	cout<<last7(a,n,0)<<endl;
	// if(First7(a,n,0)){
	// 	cout<<"Yes"<<endl;
	// }    
	// else{
	// 	cout<<"No"<<endl;
	// }
	cout<<endl;
	return 0;
}