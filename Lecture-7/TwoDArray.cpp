// TwoDArray
#include <iostream>
using namespace std;

int main(){
	// int a[][3]={
	// 	{1,2,3},
	// 	{4,5,6}
	// };
    int a[10][10];

    int r,c;
    cout<<"Enter ROWS(max 10) and COLS(max 10) : ";
    cin>>r>>c;
    int number = 1;
    // for(int row=0;row<r;row++){
    // 	for(int col=0;col<c;col++){
    // 		a[row][col]=number;
    // 		number++;
    // 	}
    // }
	for(int col=0;col<c;col++){
    	for(int row=0;row<r;row++){
    		a[row][col]=number;
    		number++;
    	}
    }
    for(int row=0;row<r;row++){
    	for(int col=0;col<c;col++){
    		cout<<a[row][col]<<" ";
    	}
    	cout<<endl;
    }








	cout<<endl;
	return 0;
}