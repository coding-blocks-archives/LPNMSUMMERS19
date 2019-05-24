// Pattern_01
#include <iostream>
using namespace std;

int main(){
	int n,number;
	cin>>n;
	for(int line = 1;line<=n;line++){
		// Work
		if(line%2==0){
			number = 0;
		}
		else{
			number = 1;
		}

		for(int i=1;i<=line;i++){
			cout<<number;
			number = 1 - number;
		}
		cout<<endl;
	}


	cout<<endl;
	return 0;
}