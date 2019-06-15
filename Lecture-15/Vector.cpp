#include <iostream>
using namespace std;

class Vector{
public:
	int * arr;
	int cs;
	int ms;

	Vector(int n=2){
		arr = new int[n];
		cs = 0;
		ms = n;
	}

	void push_back(int val){
		if(cs == ms){
			int *oldarr = arr;
			int oldms = ms;
			arr = new int[2*ms];
			ms = 2*ms;
			for(int i = 0; i < oldms ; i++){
				arr[i] = oldarr[i];
			}

			delete []oldarr;
		}
		arr[cs] = val;
		cs ++;
	}

	void pop_back(){
		if(cs<=0){
			return;
		}
		cs--;
	}

	int operator[](int i){
		return arr[i];
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	bool isempty(){
		return cs==0;
	}
};


int main(){
	Vector v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);

	v.pop_back();
	v.pop_back();
	v.pop_back();

	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	

	return 0;
}