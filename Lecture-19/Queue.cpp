// Queue
#include <iostream>
using namespace std;

class Queue{
	int *a;
	int n;
	int f;
	int r;
	int count;
public:
	Queue(int s=5){
		a = new int[s];
		n=s;
		f=0;
		r=n-1;
		count=0;
	}

	void push(int data){
		if(count==n){
			cout<<"Queue Overflow"<<endl;
		}
		else{
			r = (r+1)%n;
			a[r] = data;
			count++;
		}
	}

	void pop(){
		if(count==0){
			cout<<"Queue Underflow"<<endl;
		}
		else{
			f = (f+1)%n;
			count--;
		}
	}

	bool empty(){
		return count==0;
	}

	int front(){
		return a[f];
	}

	int size(){
		return count;
	}
};

//----------------------------------------------
void Print(Queue q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main(){
	Queue q;

	q.push(0);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.push(5);
	Print(q);



	return 0; 
}