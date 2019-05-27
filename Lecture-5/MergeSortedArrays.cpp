// MergeSortedArrays
#include <iostream>
using namespace std;

int main(){
	int a[10]={1,3,5,8,9,11};
	int b[4]={2,4,6,7};

	int i=5;
	int j=3;
	int k=9;

	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
		else{
			a[k]=b[j];
			k--;
			j--;
		}
	}

	// Copy the remaining elements as it is
	if(i<0 && j>=0){
		while(j>=0){
			a[k]=b[j];
			k--;
			j--;

		}
	}
	else{
		while(i>=0){
			a[k]=a[i];
			k--;
			i--;
		}
	}

	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}






	cout<<endl;
	return 0;
}