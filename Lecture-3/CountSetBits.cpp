// CountSetBits
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans = 0;
	// Using Bitwise Operator
	for( ; n!=0 ; n=n>>1){
		if((n&1) == 1){
			ans++;
		}
	}
	cout<<ans<<endl;
	// Calculate Binary Number 
	// for( ;n!=0;n=n/2){
	// 	cout<<n%2;
	// 	if(n%2 == 1){
	// 		ans = ans+1;
	// 	}
	// }
	// cout<<endl<<ans;
	// cout<<endl;





	cout<<endl;
	return 0;
}