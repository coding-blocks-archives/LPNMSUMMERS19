#include <iostream>
using namespace std;

int length(char* ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}


int main(){
	char ch[100];

	cin.getline(ch,100);

	cout<<ch<<endl;

	int i=0;
	int j=length(ch)-1;

	while(i<j){
		swap(ch[i],ch[j]);
		i++;
		j--;
	}

	cout<<ch<<endl;


    
	cout<<endl;
	return 0;
}