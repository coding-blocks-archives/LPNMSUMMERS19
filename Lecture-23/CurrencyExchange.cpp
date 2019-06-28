// CurrencyExchange
#include <iostream>
#include <climits>
using namespace std;

int TopDown(int coins[],int n,int amount,int *arr){
	if(amount == 0){
		arr[amount] = 0;
		return 0;
	}
	if(arr[amount]!=-1){
		return arr[amount];
	}

	int ans = INT_MAX;	
	for(int i=0;i<n;i++){
		if(amount>=coins[i]){
			int smallerans = TopDown(coins,n,amount-coins[i],arr);
			if(smallerans!=INT_MAX){
				ans = min(ans,smallerans+1);
			}
		}
	}
	arr[amount] = ans;
	return ans;
}

int BottomUp(int coins[],int n,int amount){
	int *arr = new int[amount+1];

	for(int i=0;i<=amount;i++){
		arr[i] = INT_MAX;
	}
	arr[0] = 0;

	for(int rupay = 1;rupay<=amount;rupay++){
		// arr[rupay]=INT_MAX;
		for(int i=0;i<n;i++){
			if(rupay>=coins[i]){
				arr[rupay] = min(arr[rupay],arr[rupay-coins[i]]+1);
			}	
		}
	}

	return arr[amount];
}


int main(){
	int coins[] = {1,2,5,10};
	int n = sizeof(coins)/sizeof(int);

	int amount;
	cin>>amount;
	int *arr = new int[amount+1];
	for(int i=0;i<=amount;i++){
		arr[i] = -1;
	}
	cout<<TopDown(coins,n,amount,arr)<<endl;
	cout<<BottomUp(coins,n,amount)<<endl;


	return 0; 
}
