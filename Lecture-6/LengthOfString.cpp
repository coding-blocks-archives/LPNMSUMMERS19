// LengthOfString
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

int length(char *ch){
	int i;
	
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}


int main(){
	char ch[100];

	ReadString(ch);

	cout<<"Length : "<<length(ch)<<endl;

	return 0;
}