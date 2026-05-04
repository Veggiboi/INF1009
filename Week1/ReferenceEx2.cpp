#include<iostream>
using namespace std;
int main()
{
	void getResults(int, int, int*, int*);
	int a = 19, b = 7, dividend, modulus;

	getResults(a, b, &dividend, &modulus);
	cout << "Dividend is " << dividend 
		 << " and modulus is " << modulus << endl;
	return 0;
}
void getResults(int num1, int num2, 
	int* oneAddress, int* anotherAddress)
{
	*oneAddress = num1 / num2;
	*anotherAddress = num1 % num2;
}

int main()
{
	void getResults(int, int, int&, int&);
	int a = 19, b = 7, dividend, modulus;
	
	getResults(a, b, dividend, modulus);
	cout << "Dividend is " << dividend 
		 << " and modulus is " << modulus << endl;
	return 0;
}
void getResults(int num1, int num2,
	int& oneAddress, int& anotherAddress)
{
	oneAddress = num1 / num2;
	anotherAddress = num1 % num2;
}