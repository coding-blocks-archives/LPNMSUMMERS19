// ReadNumberAndString
#include <iostream>
using namespace std;

int main(){
	int n;
	char ch[100];
	cin>>n;
	// cin.ignore();
	cin.getline(ch,100);

	cout<<n<<endl;
	cout<<ch<<endl;
    
	return 0;
}