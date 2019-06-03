// LargestOfNString
#include <iostream>
using namespace std;

int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}

void COPY(char* ms,char *ip){
	int i;
	// while(ip[i]!='\0'){
	// 	ms[i]=ip[i];
	// 	i++;
	// }
	for(i=0;ip[i]!='\0';i++){
		ms[i]=ip[i];
	}
	ms[i]='\0';

}

int main(){
	int n;
	cin>>n;
	char ip[100];
	char maxString[100];
	int maxStringLength = -1;
	cin.ignore();
	for(int i=0;i<n;i++){
		cin.getline(ip,100);
		int ipLength = length(ip);
		if(ipLength > maxStringLength){
			maxStringLength = ipLength;
			COPY(maxString,ip);
		}

	}
	cout<<"Largest String : "<<maxString<<endl;
	cout<<"Length : "<<maxStringLength<<endl;
    
	cout<<endl;
	return 0;
}