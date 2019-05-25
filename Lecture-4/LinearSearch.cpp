// LinearSearch
#include <iostream>
using namespace std;

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int key;

	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";		
	}
	cout<<endl;
	cout<<"Enter Key : ";
	cin>>key;
	int i;
	for(i=0;i<10;i++){
		if(a[i]==key){
			cout<<"Key Found at index : "<<i<<endl;
			break;
		}
	}
	if(i==10){
		cout<<"Key Not Found!"<<endl;
	}

    
	cout<<endl;
	return 0;
}