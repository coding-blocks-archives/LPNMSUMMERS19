#include <iostream>
using namespace std;

void Update(int* x){
	*x = *x + 1;
	return;
}

int main(){
	int a=10;

	cout<<"Before Updation : "<<a<<endl;

	Update(&a);

	cout<<"After Updation : "<<a<<endl;

    
	cout<<endl;
	return 0;
}