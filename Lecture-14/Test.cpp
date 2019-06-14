#include <iostream>
using namespace std;

int main(){
	int n = strlen("BMW");
	char *name=new char[n+1];

	strcpy(name,"BMW");
	cout<<name<<endl;
	return 0;
}