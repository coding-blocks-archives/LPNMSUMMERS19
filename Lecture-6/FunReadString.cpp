// FunReadString
// ReadString
#include <iostream>
using namespace std;

void ReadString(char a[],char delimiter='\n'){
	int i=0;
	char ch;
	ch = cin.get();
	while(ch!=delimiter){
		// Work
		a[i] = ch;
		i++;
		ch = cin.get();
	}
    a[i] = '\0';	
    return;
}
int main(){
	char a[100];
	ReadString(a,'@');

    cout<<"Entered String : "<<a;
	cout<<endl;
	return 0;
}