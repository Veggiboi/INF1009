#include<iostream>
using namespace std;

class Vehicle {
private:
	double price = 0;
public:
	void setPrice(double p) { price = p; }
	double getPrice() { return price; }
	double comparePrices(const Vehicle&, Vehicle&);    //Call By-Reference
//	double comparePrices(const Vehicle, Vehicle);      //Call By-Value
};

// Call By-Reference
double Vehicle::comparePrices(const Vehicle& car1, Vehicle& car2)
{
	double price;
	cout << "Enter the price for the used car: ";
	cin >> price;
	car2.setPrice(price);
	return car1.price - car2.price;
}

// Call by Value
/*
double Vehicle::comparePrices(const Vehicle car1, Vehicle car2)
{
	double price;
	cout << "Enter the price for the used car: ";
	cin >> price;
	car2.setPrice(price);
	return car1.price - car2.price;
}
*/

int main()
{
	Vehicle newCar, usedCar;
	double diff;
	newCar.setPrice(38000);
	diff = newCar.comparePrices(newCar, usedCar);
	cout << "Used car price is $" << usedCar.getPrice();
	cout << ", the difference is $" << diff << endl;
	return 0;
}

