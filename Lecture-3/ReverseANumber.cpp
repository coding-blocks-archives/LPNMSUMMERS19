// ReverseANumber
#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	// int ans = 0;
	// for( ; num!=0 ; ){
	// 	ans = ans*10 + num%10;

	// 	num=num/10;
	// }
	for( ;num!=0;num=num/10){
		cout<<num%10;
	}
	// cout<<ans;


	cout<<endl;
	return 0;
}