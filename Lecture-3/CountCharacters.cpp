// CountCharacters

#include <iostream>
using namespace std;

int main(){
	char ch;
	int count=0;
	ch = cin.get();
	// cin>>ch; // Initialization
	while(ch!='$'){
		count++;

		ch = cin.get();
		// cin>>ch; // Updation
	}
	cout<<count<<endl;

	cout<<endl;
	return 0;
}