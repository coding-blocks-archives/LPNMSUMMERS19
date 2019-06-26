#include <iostream>
using namespace std;

template<typename T>
class node{
public:
	string key;
	T value;
	node<T>* next;

	node(string k,T v){
		key = k;
		value = v;
	}
};

template<typename T>
class hashmap{
	node<T>** Bucket;
	int ts;	
	int cs;

	int hashFn(string key){
		int mul_factor = 1;
		int ans = 0;
		for(int i = 0; key[i]!='\0' ; i++){
			ans += mul_factor*key[i];

			mul_factor*=37;
			ans%=ts;
			mul_factor%=ts;
		}
		return ans%ts;
	}

	void rehash(){
		node<T>** oldBucket = Bucket;
		int oldts = ts;

		Bucket = new node<T>*[2*ts];
		ts = 2*ts;
		cs=0;
		for(int i=0;i<ts;i++){
			Bucket[i]=NULL;
		}

		for(int i=0;i<oldts;i++){
			node<T>* temp = oldBucket[i];

			while(temp){
				insert(temp->key,temp->value);
				temp=temp->next;
			}
			delete oldBucket[i];
		}
		delete []oldBucket;
	}

public:

	hashmap(int s=7){
		cs = 0;
		ts = s;
		Bucket = new node<T>*[ts];

		for(int i=0;i<ts;i++){
			Bucket[i] = NULL;
		}
	}

	void insert(string key,T value){
		int i = hashFn(key);
		

		node<T> *n = new node<T>(key,value);
		n->next = Bucket[i];
		Bucket[i] = n;
		cs++;

		float load_factor = cs/(ts*1.0);
		if(load_factor>0.7){
			rehash();
		}

	}

	T* search(string key){
		int i = hashFn(key);
		node<T>* temp = Bucket[i];

		while(temp){
			if(temp->key == key){
				return &(temp->value);
			}
			temp=temp->next;
		}
		return NULL;
	}

	T& operator[](string key){
		T* ans = search(key);

		if(ans == NULL){
			T garbage;
			insert(key,garbage);
			ans = search(key);
			return *ans;
		}
		else{
			return *ans;
		}
	}

	void remove(string key){
		int i = hashFn(key);
		node<T>* temp = Bucket[i];
	}


	void Print(){
		for(int i=0;i<ts;i++){
			cout<<i<<"->";
			node<T>* temp = Bucket[i];
			while(temp){
				cout<<temp->key<<",";
				temp=temp->next;
			}
			cout<<endl;
		}
	}

};

int main(){

	hashmap<int> h;

	h.insert("Mango",100);
	h.insert("Pineapple",50);
	h.insert("Apple",150);
	// cout<<h["Mango"]<<endl;
	h["Mango"] = 200; // Updation
	// cout<<h["Mango"]<<endl; // Search

	h["Guava"] = 30; // Insertion
	h["Kiwi"] = 60;

	h.Print();








	return 0; 
}