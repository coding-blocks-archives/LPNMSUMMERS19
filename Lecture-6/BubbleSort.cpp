// BubbleSort
#include <iostream>
using namespace std;

void BubbleSort(int *a,int n){
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
			if(*(a+j)>*(a+j+1)){
				swap(*(a+j),*(a+j+1));
			}
		}
	}
}

void Print1(int *a,int n){
	for(int i=0;i<n;i++){
		// cout<<a[i]<<" ";
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}

int main(){
	int a[]={5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	Print1(a,n);
	BubbleSort(a,n);
	Print1(a,n);

	
    
	cout<<endl;
	return 0;
}