#include <iostream>
using namespace std;

int x = 100;


int main(){
		
	int x = 300;
	::x = ::x + 500;
	cout<<::x<<endl;
	// int i=2;

	
	// for(;i<=10;i++){
	// 	cout<<i<<endl;
	// }
	// cout<<i<<endl;
	
	return 0;
}
