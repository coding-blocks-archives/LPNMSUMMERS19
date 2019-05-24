// BreakAndCont
#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<10;i++){
		if(i==5){
			cout<<i<<endl;
			break;
		}
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=1;i<10;i++){
		if(i==5){
			i++;
			continue;
		}
		cout<<i<<" ";
	}

	cout<<endl;
	return 0;
}