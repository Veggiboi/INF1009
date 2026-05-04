#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int *a = new int;       //pointer allocate to new int 
	*a = 9;                 //declare content to 9
	cout << *a << endl;     //print "9"
	delete a;               //free memory a
	
	int *b = new int[2];    //pointer allocate to new array
	b[0] = 3;               //declare array index at 0 to 3
	cout << b[0] << endl;   //print "3"
	cout << b[1] << endl;   //print garbage
	delete[] b;             //free memory b
	//cout << b[1] << endl; //error, b non-existent
	return 0;
}
