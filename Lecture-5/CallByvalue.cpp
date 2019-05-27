// CallByvalue
#include <iostream>
using namespace std;

void SWAP(int &a,int &b){
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"In swap : "<<a<<" "<<b<<endl; // 2
}

int main(){

	int x=10,y=20;
	SWAP(x,y);

	cout<<"In Main : "<<x<<" "<<y<<endl; // 1 
	cout<<endl;
	return 0;
}