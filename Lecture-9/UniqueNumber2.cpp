// UniqueNumber2
#include <iostream>
using namespace std;

int main(){
	int a[100]={1,2,3,1,3,5,4,4};
	int n=8;
	// cout<<"Enter n : ";
	// cin>>n;

	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }

	// 1.Find the result by Xoring all the elements
	int result = 0;
	for(int i=0;i<n;i++){
		result = result^a[i];
	}
	cout<<result<<endl;

	// 2.Find the decimal number that has a particular bit
	// different in both the numbers
	int p=1;
	int x = result;
	if((result&1)!=1){
		while(result){
			p=p*2;
			result = result>>1;
			if((result&1)==1){
				break;
			}
		}
	}
	cout<<p<<endl;
	// 3."Bitwise and" with all the numbers of the decimal number found
	// and XOR all of them to get a unique number
	int no1=0;
	for(int i=0;i<n;i++){
		if((a[i]&p)==0){
			no1 = no1^a[i];
		}
	}
	// 4.Xor with the result the found unique number to get another 
	// unique number
	int no2 = no1^x;
	cout<<"Unique numbers are : "<<no1<<" and "<<no2<<endl;



	return 0;
}