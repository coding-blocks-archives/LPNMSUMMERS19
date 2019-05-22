// CelFar
#include <iostream>
using namespace std;

int main(){
	int init,fval,step;
	cin>>init>>fval>>step;

	int Fstart = init;
	int Fend = fval;
	while(Fstart<=Fend){
		
		int cel = 5*(Fstart-32)/9;
		cout<<Fstart<<" "<<cel<<endl;

		Fstart = Fstart +step;
	}

	cout<<endl;
	return 0;
}