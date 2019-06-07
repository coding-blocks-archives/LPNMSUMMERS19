#include <iostream>
using namespace std;

string s[10]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void IntToString(int n){
	if(n==0){
		return;
	}
	int digit = n%10;
	IntToString(n/10);
	cout<<s[digit]<<" ";
}

int main(){
	int n;
	cin>>n;

	IntToString(n);
    
	cout<<endl;
	return 0;
}