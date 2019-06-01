// Character2D
#include <iostream>
using namespace std;

int main(){
	char ch[][4]={
		{'A','B','C','\0'},
		{'D','E','F','\0'},
		{'G','H','I','\0'}
	};
	char ch1[][10]={
		"Hello",
		"World",
		"COding",
		"Blocks"
	};

	for(int row = 0; row<3;row++){
		for(int col=0;col<3;col++){
			cout<<ch[row][col]<<" ";
		}
		cout<<endl;
	}
    cout<<ch[0]<<endl;
    cout<<ch[1]<<endl;
    cout<<ch[2]<<endl;
    cout<<ch1[0]<<endl;
    cout<<ch1[1]<<endl;
    cout<<ch1[2]<<endl;
	cout<<endl;
	return 0;
}