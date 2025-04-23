#include <iostream>
using namespace std;
class Vehicle{
	public:
	int mileage, price;
};

class Car:public Vehicle{
	public:
	int ownership_cost;
	int warranty, seat_capacity;
	string fuel_type;
};
class Bike:public Vehicle{
	public:
	int cylinder, gear;
	string cooling_type, wheel_type;
	int fuel_size;
};

class Audi:public Car{
	public:
	string model_type;
	void getData()
	{
		cout<<"\nFor Audi : \n";
		cout<<"Enter model type: ";
		cin>>model_type;
		cout<<"Enter ownership cost: ";
		cin>>ownership_cost;
		cout<<"Enter warrenty(in yrs): ";
		cin>>warranty;
		cout<<"Enter seating capacity: ";
		cin>>seat_capacity;
		cout<<"Enter fuel type: ";
		cin>>fuel_type;
		cout<<"Enter mileage: ";
		cin>>mileage;
		cout<<"Enter price: ";
		cin>>price;
	}
	void display()
	{
		cout<<"\nAudi Details:\n";
        cout<<"Model Type: "<<model_type<<"\nOwnership Cost: "<<ownership_cost<<"\nWarranty: "<<warranty<<" years\n";
        cout<<"Seating Capacity: "<<seat_capacity<<"\nFuel Type: "<<fuel_type<<"\nMileage: "<<mileage<<"\nPrice: "<<price<<"\n";
    }
};
class Ford:public Car{
	public:
	string model_type;
	void getData()
	{
		cout<<"\nFor Ford:\n";
		cout<<"Enter model type: ";
		cin>>model_type;
		cout<<"Enter ownership cost: ";
		cin>>ownership_cost;
		cout<<"Enter warrenty(in yrs): ";
		cin>>warranty;
		cout<<"Enter seating capacity: ";
		cin>>seat_capacity;
		cout<<"Enter fuel type: ";
		cin>>fuel_type;
		cout<<"Enter mileage: ";
		cin>>mileage;
		cout<<"Enter price: ";
		cin>>price;
	}
	void display()
	{
		cout<<"\nFord Details:\n";
        cout<<"Model Type: "<<model_type<<"\nOwnership Cost: "<<ownership_cost<<"\nWarranty: "<<warranty<<" years\n";
        cout<<"Seating Capacity: "<<seat_capacity<<"\nFuel Type: "<<fuel_type<<"\nMileage: "<<mileage<<"\nPrice: "<<price<<"\n";
    }
};

class Bajaj:public Bike{
	public:
	string make_type;
	void getData() {
		cout<<"\nFor Bajaj:\n";
        cout<<"Enter Bajaj Make Type: ";
        cin>>make_type;
        cout<<"Enter Cylinders: ";
        cin>>cylinder;
        cout<<"Enter Gears: ";
        cin>>gear;
        cout<<"Enter Cooling Type: ";
        cin>>cooling_type;
        cout<<"Enter Wheel Type: ";
        cin>>wheel_type;
        cout<<"Enter Fuel Tank Size (inches): ";
        cin>>fuel_size;
        cout<<"Enter Mileage: ";
        cin>>mileage;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void display() {
        cout<<"\nBajaj Details:\n";
        cout<<"Make Type: "<<make_type<<"\nCylinders: "<<cylinder<<"\nGears: "<<gear<<"\nCooling Type: "<<cooling_type;
        cout<<"\nWheel Type: "<<wheel_type<<"\nFuel Tank Size: "<<fuel_size<<" inches\nMileage: "<<mileage<<"\nPrice: "<<price<<"\n";
    }
};
class TVS:public Bike{
	public:
	string make_type;
	void getData() {
		cout<<"\nFor TVS:\n";
        cout<<"Enter TVS Make Type: ";
        cin>>make_type;
        cout<<"Enter Cylinders: ";
        cin>>cylinder;
        cout<<"Enter Gears: ";
        cin>>gear;
        cout<<"Enter Cooling Type: ";
        cin>>cooling_type;
        cout<<"Enter Wheel Type: ";
        cin>>wheel_type;
        cout<<"Enter Fuel Tank Size (inches): ";
        cin>>fuel_size;
        cout<<"Enter Mileage: ";
        cin>>mileage;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void display() {
        cout<<"\nTVS Details:\n";
        cout<<"Make Type: "<<make_type<<"\nCylinders: "<<cylinder<<"\nGears: "<<gear<<"\nCooling Type: "<<cooling_type;
        cout<<"\nWheel Type: "<<wheel_type<<"\nFuel Tank Size: "<<fuel_size<<" inches\nMileage: "<<mileage<<"\nPrice: "<<price<<"\n";
    }
};


int main()
{
	Audi a;
    Ford f;
    Bajaj b;
    TVS t;

    a.getData();
    f.getData();
    b.getData();
    t.getData();
    
	cout<<"\n";
	
    a.display();
    f.display();
    b.display();
    t.display();
 	return 0;
}
