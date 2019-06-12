// ElephantWays
#include <iostream>
using namespace std;

int ElephantWays(int n,int m){
	// Base case
	if(n==0&&m==0){
		return 1;
	}

	// Recursive case
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans += ElephantWays(n-i,m);
	}
	for(int i=1;i<=m;i++){
		ans += ElephantWays(n,m-i);
	}

	return ans;
}


int main(){
	int n,m;
	cin>>n>>m;
	cout<<ElephantWays(n,m)<<endl;


	return 0;
}