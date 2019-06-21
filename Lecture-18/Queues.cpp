// Queues
#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
	Queue q;

	q.push(0);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;



	return 0;
}
