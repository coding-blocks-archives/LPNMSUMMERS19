// WineProblem
#include <iostream>
using namespace std;

int TopDown(int wine[],int i,int j,int day,int dp[][100]){
	if(i>j){
		dp[i][j] = 0;
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int op1 = wine[i]*day + TopDown(wine,i+1,j,day+1,dp);
	int op2 = wine[j]*day + TopDown(wine,i,j-1,day+1,dp);

	dp[i][j] = max(op1,op2);
	return dp[i][j];
}


int main(){

	int wine[]={2,3,5,1,4};
	int n=sizeof(wine)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j] = -1;
		}
	}

	cout<<TopDown(wine,0,n-1,1,dp)<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;


	return 0; 
}
