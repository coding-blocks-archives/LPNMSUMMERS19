// SelectionSort
#include <iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=n-i;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;

	// Selection Sort
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
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}




    
	cout<<endl;
	return 0;
}