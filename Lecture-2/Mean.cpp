// Mean
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int min1 = INT_MAX; // + infinity : 2^31-1
	int max1 = INT_MIN; // - infinity : -2^31
	int sum = 0;

	int n;
	cin>>n;
	int i=1,no;
	while(i<=n){
		cin>>no;
		if(no>max1){
			max1 = no;
		}
		if(no<min1){
			min1 = no;
		}

		sum = sum +no;
		i=i+1;
	}
	cout<<"Max : "<<max1<<endl;
	cout<<"Min : "<<min1<<endl;
	cout<<"Sum : "<<sum<<endl;


	cout<<endl;
	return 0;
}