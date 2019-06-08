// TOH
#include <iostream>
using namespace std;

void TOH(int n,char source,char helper,char destination){
	// base case
	if(n==0){
		return;
	}
	// Recursive case
	TOH(n-1,source,destination,helper);
	cout<<"Taking disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	TOH(n-1,helper,source,destination);

}


int main(){
	int n;
	cin>>n;

	TOH(n,'A','B','C');


	return 0;
}
