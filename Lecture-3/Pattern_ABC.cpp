// Pattern_ABC
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int line=1;line<=n;line++){
		// work
		// 1. Print n-line+1 increasing characters
		char ch = 'A';
		for(int i=1;i<=n-line+1;i++){
			cout<<ch;
			ch++;
		}
		ch--;
		// 2. Print n-line+1 decreasing characters
		for(int i=1;i<=n-line+1;i++){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}

	cout<<endl;
	return 0;
}