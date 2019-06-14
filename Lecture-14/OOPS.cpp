// OOPS
#include <iostream>
using namespace std;
// -------------- BLUE PRINT -------------------
class Car{
private:
	int price;
public:
	static int count;
	char* name;
	int model;
	int seats;
	const int tyres;

	// Default Constructor
	Car():tyres(4){
		name = NULL;
		cout<<"In Default Constructor"<<endl;
		count++;
	}

	// Parameterzied constructor
	Car(char* n,int p,int s,int m):tyres(4),price(p),seats(s),model(m){
		cout<<"In Parameterzied Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		count++;
	}

	// Copy Constructor
	Car(Car &X):tyres(4){
		cout<<"In Copy Constructor"<<endl;
		price = X.price;
		seats = X.seats;
		model = X.model;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		count++;
	}

	void print()const{
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Tyres : "<<tyres<<endl;
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

	int GetPrice()const{
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

	// Destructor
	~Car(){
		cout<<"In Destructor"<<name<<endl;
		count--;
	}
};

int Car::count;
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
	int * m = new int;
	float * f = new float;
	Car* g = new Car;
	(*g).name = new char [10];
	strcpy((*g).name,"F1");
	cout<<(*g).name<<endl;
	a.print();
	b.print();
	c.print();
	d.print();
	e.print();
	(*g).print();
	cout<<"No of cars "<<a.count<<endl;
	delete g;
	g= NULL;
	cout<<"No of cars "<<Car::count<<endl;




	return 0;
}