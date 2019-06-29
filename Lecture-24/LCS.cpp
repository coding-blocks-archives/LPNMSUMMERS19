#include <iostream>
using namespace std;

int LCS(char* a, char* b){
	int dp[100][100] = {0};
	int m = strlen(b);
	int n = strlen(a);

	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}
	for(int j=0;j<=m;j++){
		dp[0][j] = 0;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i-1] == b[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}

		}
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return dp[n][m];

}

int main(){
	char b[100]="ade";
	char a[100]="cabde";

	cout<<LCS(a,b)<<endl;


	return 0; 
}