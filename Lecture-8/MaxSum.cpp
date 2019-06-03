// MaxSum
#include <iostream>
using namespace std;

int main(){
	int a[][4]={
		{1,5,2,2},
		{3,3,6,7},
		{200,200,5,1},
		{1,80,90,1}
	};
	int Rowsum = 0;
	int ans = 0;
	int maxRow = -1;
	for(int row=0;row<4;row++){
		ans=0;
		for(int col=0;col<4;col++){
			ans += a[row][col];
		}
		if(ans>Rowsum){
			Rowsum = ans;
			maxRow = row;
		}
	}

	int ColSum = 0;
	int maxCol = -1;
	for(int col = 0; col < 4 ; col++){
		int ans = 0;
		for(int row = 0; row < 4 ; row++){
			ans += a[row][col];
		}
		if(ans > ColSum){
			ColSum = ans;
			maxCol = col;
		}
	}
	if(Rowsum>ColSum){
		cout<<"Sum max of row : "<<maxRow<<" SUM : "<<Rowsum<<endl;
	}
	else{
		cout<<"Sum max of col : "<<maxCol<<" SUM : "<<ColSum<<endl;

	}










    
	cout<<endl;
	return 0;
}