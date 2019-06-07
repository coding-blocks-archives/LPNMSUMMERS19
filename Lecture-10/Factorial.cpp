// Factorial
#include <iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0){
		return 1;
	}
	// Assumption
	return n*fact(n-1);
}

int Fibo(int n){
	// Base case
	if(n==0||n==1){
		return n;
	}
	// int ans = Fibo(n-1)+Fibo(n-2);
	// return ans;
	return Fibo(n-1)+Fibo(n-2);
}	




int main(){
	int n;
	cin>>n;
    cout<<Fibo(n);
	cout<<endl;
	return 0;
}