#include <iostream>
using namespace std;

int Ways(int n,int m){
	// Base case
	if(n==0&&m==0){
		return 1;
	}
	if(n<0||m<0){
		return 0;
	}

	// Recursive case
	return Ways(n-1,m)+Ways(n,m-1);

}

int main(){
	int n,m;
	cin>>n>>m;
	cout<<Ways(n,m)<<endl;


	return 0;
}