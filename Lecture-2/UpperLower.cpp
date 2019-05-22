// UpperLower
#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

	if(ch>='A' && ch<='Z'){
		cout<<"Upper"<<endl;
	}
	else{
		cout<<"Lower"<<endl;
	}

	cout<<endl;
	return 0;
}