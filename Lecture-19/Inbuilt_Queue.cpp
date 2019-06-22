// Inbuilt_Queue
#include <iostream>
#include <queue>
using namespace std;

void Print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main(){
	queue<int> q;
	
	q.push(0);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	Print(q);	


	return 0; 
}