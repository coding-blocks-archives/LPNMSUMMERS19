// Pallindrome
#include <iostream>
using namespace std;

int length(char *ch){
	int i;
	
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}


bool isPallindrome(char *a){
	int i=0;
	int j=length(a)-1;

	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int main(){
	char a[100];
	cin>>a;

	if(isPallindrome(a)){
		cout<<"pallindrome";
	}
	else{
		cout<<"Not";
	}



    
	cout<<endl;
	return 0;
}