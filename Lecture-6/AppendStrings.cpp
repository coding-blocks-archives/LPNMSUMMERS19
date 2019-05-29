// 
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){
	char a[100];
	char b[100];

	cin>>a;
	cin>>b;

	int i=length(a);
	int j=0;

	while(b[j]!='\0'){
		a[i]=b[j];
		i++;
		j++;
	}

	a[i] = '\0';
	cout<<a<<endl;


    
	cout<<endl;
	return 0;
}