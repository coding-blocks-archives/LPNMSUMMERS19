// OOPS
#include <iostream>
using namespace std;
// -------------- BLUE PRINT -------------------
class Car{
private:
	int price;
public:
	char name[20];
	int model;
	int seats;

	// Default Constructor
	Car(){
		cout<<"In Default Constructor"<<endl;
	}

	// Parameterzied constructor
	Car(char* n,int p,int s,int m){
		cout<<"In Parameterzied Constructor"<<endl;
		strcpy(name,n);
		price = p;
		seats = s;
		model = m;
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
};
// ---------------------------------------------

int main(){
	Car a;

	strcpy(a.name,"Maruti");
	// a.price = 100;
	a.SetPrice(1200);
	a.model = 2000;
	a.seats = 5;

	Car b;
	strcpy(b.name,"AUDI");
	b.SetPrice(-200);
	// b.price = 200;
	b.model = 2001;
	b.seats = 2;
	// cout<<b.price<<endl;
	cout<<b.GetPrice()<<endl;

	Car c("BMW",300,2,2002);

	a.print();
	b.print();
	c.print();



	return 0;
}