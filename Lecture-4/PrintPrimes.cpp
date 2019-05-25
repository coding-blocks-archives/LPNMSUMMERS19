// PrintPrimes
#include <iostream>
using namespace std;

bool CheckPrime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void PrintPrimes(int n){

	for(int i=2;i<=n;i++){
		if(CheckPrime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return;

}



int main(){
	int n;
	cin>>n;

	PrintPrimes(n);
    
	cout<<endl;
	return 0;
}