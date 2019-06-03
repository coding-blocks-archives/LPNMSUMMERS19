// Strings
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	// Initialization
	string s="Hello World";
	cout<<s<<endl;
    
	string s1 = s;
	cout<<s1<<endl;

	string s2("Welcome");
	string s3(s2);

	// Assignment
	s2 = s;

	cout<<s2<<endl;
	cout<<s3<<endl;


	////////////////////////
	string s4;
	s4 = s+s3;
	cout<<s4<<endl;

	string s5 = "Coding Blocks";
	s5+=s4;
	cout<<s5<<endl;

	string s6;
	s6 = s + ' ' + s5;
	cout<<s6<<endl;
	
	// Array of string
	string a[10]={"Hello","World","Coding","Blocks"};

	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;
	// a[3] = "Big Bang Theory";
	// cout<<a[3]<<endl;
	for(int i=0;i<4;i++){
		cout<<a[i]<<endl;
	}

	if(a[0]=="Hello"){
		cout<<"Yes"<<endl;
	}
	string user;
	getline(cin,user);
	cout<<user<<endl;



	return 0;
}