// 
#include <iostream>
using namespace std;

int main(){
	char a[100],b[100];
	cin.getline(a,100);
	cin.getline(b,100);

	int freq[26]={0};

	for(int i=0;a[i]!='\0';i++){
		int indx = a[i] - 'a';
		freq[indx]++;
	}
	for(int i=0;b[i]!='\0';i++){
		int indx = b[i] - 'a';
		freq[indx]--;
	}
	int i;
	for(i=0;i<26;i++){
		if(freq[i]!=0){
			cout<<"Not A Permutation";
			break;
		}
	}
	if(i==26){
		cout<<"Permutation";
	}










    
	cout<<endl;
	return 0;
}