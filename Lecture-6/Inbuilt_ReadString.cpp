// Inbuilt_ReadString
#include <iostream>
using namespace std;

int main(){
	char a[100];

	// Syntax : 
	// cin.getline(array_name,size,delimiter);
	cin.getline(a,5,'$'); 
	cout<<a;
	    
	cout<<endl;
	return 0;
}