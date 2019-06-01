// RotateAString
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
	int n;
	cin>>n;
	cin.ignore();
	cin.getline(ch,100);
	int len=length(ch);
	
	int i=len-1;
	while(i>=0){
		ch[i+n] = ch[i];
		i--;
	}
	i=len;
	int j=0;
	for(int k=1;k<=n;k++){
		ch[j]=ch[i];
		i++;
		j++;
	}
	ch[len]='\0';
	cout<<ch<<endl;










    
	cout<<endl;
	return 0;
}