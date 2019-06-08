// MergeSort
#include <iostream>
using namespace std;

void Merge(int *a,int *x,int *y,int s,int e){
	int i=s;
	int mid = (s+e)/2;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k++]=x[i++];
		}
		else{
			a[k++]=y[j++];
		}
	}
	while(i<=mid){
		a[k++]=x[i++];
	}
	while(j<=e){
		a[k++]=y[j++];
	}
}

void MergeSort(int *a,int s,int e){
	if(s>=e){
		return;
	}
	// Divide
	int x[100],y[100];
	int mid = (s+e)/2;
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}

	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}
	// Sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);
	// Merge
	Merge(a,x,y,s,e);
}

int main(){
	int a[]={6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}