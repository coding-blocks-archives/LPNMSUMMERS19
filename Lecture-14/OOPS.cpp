// OOPS
#include <iostream>
using namespace std;
// -------------- BLUE PRINT -------------------
class Car{
private:
	int price;
public:
	char* name;
	int model;
	int seats;

	// Default Constructor
	Car(){
		name = NULL;
		cout<<"In Default Constructor"<<endl;
	}

	// Parameterzied constructor
	Car(char* n,int p,int s,int m){
		cout<<"In Parameterzied Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		seats = s;
		model = m;
	}

	// Copy Constructor
	Car(Car &X){
		cout<<"In Copy Constructor"<<endl;
		price = X.price;
		seats = X.seats;
		model = X.model;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Seats : "<<seats<<endl<<endl;
	}

	void SetPrice(int p){
		if(p>100 && p<1000){
			price = p;
		}
		else{
			price = 101;
		}
	}

	int GetPrice(){
		return price;
	}

	void SetName(char *n){
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

	// Operator overloading 
	// return_type operator=(){

	// }
	void operator=(Car X){
		cout<<"In copy assignment"<<endl;
		if(name!=NULL){
			delete []name;
			name = NULL;
		}

		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price + 10000;
		seats = X.seats;
		model = X.model;
	}
};
// ---------------------------------------------

int main(){
	Car a;

	// strcpy(a.name,"Maruti");
	a.SetName("Maruti");
	// a.price = 100;
	a.SetPrice(1200);
	a.model = 2000;
	a.seats = 5;

	Car b("Audi",200,2,2001);
	// cout<<b.price<<endl;
	cout<<b.GetPrice()<<endl;

	Car c("BMW",300,2,2002);

	// Calling Copy Constructor
	Car d = a;// First way to call copy const.
	// Car e(d); // Second Way to call copy const.
	// e.name[0]='T';

	// Copy Assignment
	// Car e = d --> call copy constructor
	Car e; 
	e = d; // --> this calls copy assignment
	e.name[0]='T';
	a.print();
	b.print();
	c.print();
	d.print();
	e.print();



	return 0;
}