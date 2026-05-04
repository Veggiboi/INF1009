#include <iostream>
using namespace std;

namespace first { int var = 1; }
namespace second { int var = 2; }
using namespace second;
int x = 99;
int main(int argc, char *argv[])
{
	int x = 0;
	cout << first::var << endl;
	cout << second::var << endl;
	cout << var << endl;
	cout << x << " vs " << ::x << endl;
	return 0;
}
