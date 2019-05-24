// UniqueNumber1
#include <iostream>
using namespace std;

int main(){
	int n,number;
	cin>>n;
	int ans = 0;
	for(int i=1;i<=n;i++){
		cin>>number;
		ans = ans ^ number;
	}
	cout<<ans;
	return 0;
}