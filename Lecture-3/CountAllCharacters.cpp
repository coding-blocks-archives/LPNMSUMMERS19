// CountAllCharacters
// UniqueNumber1
#include <iostream>
using namespace std;

int main(){
	int characters=0,digits=0,special=0,whitespaces=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		// Work
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
			characters++;
		}
		else if(ch>='0'&&ch<='9'){
			digits++;
		}
		else if(ch==' '||ch=='\t'||ch=='\n'){
			whitespaces++;
		}
		else{
			special++;
		}
		ch = cin.get();
	}
	cout<<"Characters : "<<characters<<endl;
	cout<<"Digits : "<<digits<<endl;
	cout<<"special : "<<special<<endl;
	cout<<"whitespaces : "<<whitespaces<<endl;
	return 0;
}