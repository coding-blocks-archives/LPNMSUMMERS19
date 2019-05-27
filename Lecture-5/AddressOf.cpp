#include <iostream>
using namespace std;

int main(){
	// int a[]={1,2,3,4,5};

	// cout<<a<<endl;
	// cout<<&a[0]<<endl;
	// cout<<&a<<endl;


	int a=10;
	float b=10.45;
	char ch='A';

	// int *aptr = &a;
	// float *bptr = &b;
	char *chptr = &ch;
	int * chptr1 = (int*)&ch;
	// cout<<&a<<endl;
	// cout<<aptr<<endl;
	// cout<<&b<<endl;
	// cout<<bptr<<endl;
	cout<<(void*)chptr<<endl;
	cout<<(int*)(chptr+1)<<endl;
	cout<<(int*)(chptr1)<<endl;
	cout<<(int*)(chptr1+1)<<endl;


    
	cout<<endl;
	return 0;
}