// SelectionSort
#include <iostream>
using namespace std;

void SelectionSort(int a[],int n){
	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}	
	return;
}


int main(){
	int a[5]={5,4,3,2,1};
	int n=5;

	SelectionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	return 0;
}