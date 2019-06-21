// Inbuilt_Stack
// Stack_Using_Vector
#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<char> s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');
	// for(int i=0;i<=10;i++){
	// 	s.push(i);
	// }

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}	
	cout<<endl;
	return 0;
}
