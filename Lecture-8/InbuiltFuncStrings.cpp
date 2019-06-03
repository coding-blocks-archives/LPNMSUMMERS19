// InbuiltFuncStrings
#include <iostream>
#include <cstring> // - header file
using namespace std;
int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}

int main(){
	char ch[100] = "Hello World";
	char ch1[100];
	cout<<strlen(ch)<<endl;
    strcpy(ch1,ch);
    strcat(ch1,ch);

    cout<<ch<<endl;
    cout<<ch1<<endl;

    char words[][100]={
    	"Hello",
    	"World",
    	"Coding",
    	"Blocks"
    };
    char ch[100];
    cin.getline(ch,100); // Whether this exists in words or not










	cout<<endl;
	return 0;
}