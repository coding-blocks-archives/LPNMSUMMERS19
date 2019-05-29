// ReadString
#include <iostream>
using namespace std;

int main(){
	char a[100];

	// cin>>a; // Automatically appends null at the end
	// cout<<a<<endl;
	// Using ch = cin.get();
	// we need to append NULL at the last
	int i=0;
	// Read Characters and store them in the array
	// one by one at index i(i.e. a[i]), then increment i to store
	// the next character
	char ch;
	ch = cin.get();
	while(ch!='\n'){
		// Work
		a[i] = ch;
		i++;
		ch = cin.get();
	}
    a[i] = '\0';
    cout<<a;
	cout<<endl;
	return 0;
}