// ReadThePages
#include <iostream>
#include <climits>
using namespace std;

bool KyaDistributeHoPaya(int* books,int n,int students,int pages){
	int current_students = 1;
	int current_pages = 0;
	for(int i=0;i<n;i++){
		if(current_pages+books[i]<=pages){
			current_pages+=books[i];
		}
		else{
			current_students++;
			if(current_students>students){
				return false;
			}
			current_pages = books[i];
		}

	}
	return true;
}

int ReadThePages(int *books,int n,int students){
	int totalPages = 0;
	int s=0;
	for(int i=0;i<n;i++){
		totalPages+=books[i];
		s=max(s,books[i]);
	}
	int e=totalPages;
	int ans=INT_MAX;
	while(s<=e){
		int mid = (s+e)/2;

		if(KyaDistributeHoPaya(books,n,students,mid)){
			ans = min(ans,mid);
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}


int main(){
	int books[]={10,20,30,40};
	int n=4;
	int s=2;

	cout<<ReadThePages(books,n,s);
    
	cout<<endl;
	return 0;
}