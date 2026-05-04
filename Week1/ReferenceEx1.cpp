#include<iostream>
#include<string>
using namespace std;

class Vehicle{

};


int main() {
	Vehicle myCar;
	Vehicle &myOnlyCar = myCar;


	int a = 4, b = 12;
	int* pnt = &a;
	cout << *pnt << endl; // output is 4
	pnt = &b;
	cout << *pnt << endl; // output is 12
	*pnt += 1;
	cout << b << endl; // output is 13
	cout << a << endl; // output is 4

	int x = 4, y = 12;
	int& ref = x;
	cout << ref << endl; // output is 4
	ref = y;
	cout << ref << endl; // output is 12
	ref += 1;
	cout << y << endl; // output is 12
	cout << x << endl; // output is 12

	//int p = 7;
	//int *pnt = &p;
	
	//cout << *pnt << endl;  // output is 7
	//cout << pnt << endl;   // output is 0034FB40
	//cout << ++pnt << endl; // output is 0034FB44

	//int r = 11;
	//int &ref = r;
	
	//cout << *ref << endl; //error: operand must be a pointer
	//cout << ref << endl;	// output is 11
	//cout << ++ref << endl;  // output is 12
	//cout << &ref << endl;   //output is 0034FB26
	//cout << ++(&ref) << endl; //error! not modifiable



	return 0;
}