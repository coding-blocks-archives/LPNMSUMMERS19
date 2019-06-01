#include <iostream>
using namespace std;

void SpiralPrint(int a[][4],int row,int col){

	int sr=0,sc=0;
	int er=row-1,ec=col-1;
	
	while(sr<=er && sc<=ec){
		// Print StartRow
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		// Print EndCol
		for(int j=sr;j<=er;j++){
			cout<<a[j][ec]<<" "; 
		}
		ec--;

		// Print EndRow
		if(sr<er){
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}
			er--;
		}

		// Print StartCol
		if(sc<ec){
			for(int j=er;j>=sr;j--){
				cout<<a[j][sc]<<" ";
			}
			sc++;
		}
	}


}

int main(){
	 int a[4][4]={
	 	{1,2,3,4},
	 	{5,6,7,8},
	 	{9,10,11,12},
	 	{13,14,15,16}
	 };
	 int row,col;
	 cin>>row>>col;
	 for(int i=0;i<row;i++){
	 	for(int j=0;j<col;j++){
	 		cout<<a[i][j]<<" ";
	 	}
	 	cout<<endl;
	 }
	 cout<<endl;

	 SpiralPrint(a,row,col);

	cout<<endl;
	return 0;
}