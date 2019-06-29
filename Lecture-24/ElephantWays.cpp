// ElephantWays
#include <iostream>
using namespace std;

int ElephantWays(int i,int j){
	int dp[100][100]={0};

	dp[0][0] = 1;
	int val = 1;

	for(int k=1;k<=j;k++){
		dp[0][k] = val;
		val = 2*val;
	}
	val = 1;
	for(int k=1;k<=i;k++){
		dp[k][0] = val;
		val=2*val;
	}
	for(int k=1;k<=i;k++){
		for(int l=1;l<=j;l++){
			int ans = 0;
			for(int x = 0;x<k;x++){
				ans += dp[x][l];
			}
			for(int x = 0; x<l ; x++){
				ans += dp[k][x];
			}
			dp[k][l] = ans;
		}
	}
	for(int k=0;k<=i;k++){
		for(int l=0;l<=j;l++){
			cout<<dp[k][l]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return dp[i][j];
}

int main(){
	
	int i,j;
	cin>>i>>j;

	cout<<ElephantWays(i,j)<<endl;




	return 0; 
}