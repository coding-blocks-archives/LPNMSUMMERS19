// CelFarehn
#include <iostream>
using namespace std;

void PrintTable(int init,int fval,int step){
	int Fstart = init;
	int Fend = fval;
	while(Fstart<=Fend){
		
		int cel = 5*(Fstart-32)/9;
		cout<<Fstart<<" "<<cel<<endl;

		Fstart = Fstart +step;
	}
}

void CheckPrime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not Prime";
			break;
		}
	}
	if(i==n){
		cout<<"Prime";
	}

}

int main(){
	int init,fval,step;
	cin>>init>>fval>>step;
	PrintTable(init,fval,step);
    CheckPrime(7);


	cout<<endl;
	return 0;
}