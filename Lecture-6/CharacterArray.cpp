#include <iostream>
using namespace std;

int main(){
	char a1[]={'A','B','C','D'};
	int n=sizeof(a1);
	cout<<a1<<endl;
	char a[3]={'A','B','C'};

	char ch[]="Kartik";
	char ch1[6]="Apple";
	char ch2[]="Mango";
	char ch3[]="Papaya";

	cout<<ch<<endl;
	cout<<ch1<<endl;
	cout<<ch2<<endl;
	cout<<ch3<<endl;


	for(int i=0;i<n;i++){
		cout<<a1[i]<<" ";
	}

    
	cout<<endl;
	return 0;
}