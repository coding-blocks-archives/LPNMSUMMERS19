// Directions
#include <iostream>
using namespace std;

int main(){
	char ch;
	int x=0,y=0;

	ch=cin.get(); // init
	while(ch!='\n'){ // Condition Check
		if(ch=='N'){
			y++;
		}
		else if(ch=='S'){
			y--;
		}
		else if(ch=='E'){
			x++;
		}
		else{
			x--;
		}

		ch=cin.get(); // Updation
	}
	if(x>=0 && y>=0){
		while(x>0){
			cout<<"E";
			x--;
		}
		while(y>0){
			cout<<"N";
			y--;
		}
	}
	else if(x<=0 && y>=0){
		// 2nd Quadrant
		x=-1*x;
		while(y>0){
			cout<<"N";
			y--;
		}
		while(x>0){
			cout<<"W";
			x--;
		}
	}
	cout<<endl;

	return 0;
}