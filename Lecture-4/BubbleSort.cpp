// BubbleSort
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
	// Bubble Sort
	for(int i=0;i<=n-2;i++){ // Number of iterations : n-1
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				// swap both the elements i.e a[j] and a[j+1]
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}


	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
    
	cout<<endl;
	return 0;
}