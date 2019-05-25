// LargestNumber
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int a[10]={3,5,-1,8,4,40,1,2,0,-100};
	int max = INT_MIN;
	for(int i=0;i<10;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
    cout<<max;	
	cout<<endl;
	return 0;
}


