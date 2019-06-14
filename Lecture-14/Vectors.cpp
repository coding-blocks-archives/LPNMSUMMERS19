#include <iostream>
#include <vector> // Header file
using namespace std;

int main(){
	// Syntax : 
	// vector<datatype> v;
	vector<int> v;
	v.push_back(1);	
	v.push_back(2);	
	v.push_back(3);	
	v.push_back(4);	
	v.push_back(5);	
	v.push_back(6);	
	v.push_back(7);	
	v.push_back(8);	
	v.push_back(8);	

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	// v.pop_back();
	// v.pop_back();
	// v.pop_back();
	// v.push_back(10);
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
	cout<<v.capacity()<<endl;

	if(!v.empty()){
		cout<<"Empty"<<endl;
	}
	
	return 0;
}