// 
#include <iostream>
#include <climits>
using namespace std;

bool KyaRakhPaaye(int *a,int n,int cows,int distance){
	int current_cows = 1;
	int pos = a[0];
	 
	for(int i=1;i<n;i++){
		if((a[i]-pos)>=distance){
			current_cows++;
			pos = a[i];
			if(current_cows==cows){
				return true;
			}
		}
	}
	if(current_cows!=cows){
		return false;
	}
	else{
		return true;
	}
}


int AggressiveCows(int* a,int n,int cows){
	int s=0;
	int e=a[n-1];
	int ans = INT_MIN;
	while(s<=e){
		int mid = (s+e)/2;
		if(KyaRakhPaaye(a,n,cows,mid)){
			ans = max(ans,mid);
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}


int main(){
	int n=5;
	int a[1000]={1,2,8,4,9};
	int c=3;
	sort(a,a+n);
	cout<<AggressiveCows(a,n,c);
    
	cout<<endl;
	return 0;
}