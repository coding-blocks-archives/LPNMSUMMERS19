// Pattern_123
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n; // How many lines to print
	/* Multiple
	Lines comment */
	int line = 1;
	int no = 1;
	while(line<=n){
		int i = 1;
		while(i<=line){
			cout<<no<<' ';
			no=no+1;
			i=i+1;
		}
		cout<<endl;
		line = line + 1;
	}


	cout<<endl;
	return 0;
}