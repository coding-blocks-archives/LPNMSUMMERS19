// Functions
#include <iostream>
using namespace std;

//Syntax :
// return_type function_name(arguments){

// }
// void HelloWorld(); // Forward Declaration
void HelloWorld(){
	cout<<"Hello world";
}

void CheckEven(int n){
	if(n%2==0){
		cout<<"Even";
	}
	else{
		cout<<"Odd";
	}
}

bool Even(int n){
	if(n%2==0){
		return true;
	}
	return false;
}





int main(){
	
	// HelloWorld(); // Function calling or invoking	
	// CheckEven(11);
	bool ans = Even(10);
	if(ans == true){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
	cout<<endl;
	return 0;
}




