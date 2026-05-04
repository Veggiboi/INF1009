#include <iostream>

using namespace std;

inline double averageSpeed(double dist, double t)
{
	return(dist / t);
}

int main()
{
	double distance = 37.5, time = 12.45, speed;
	speed = averageSpeed(distance, time);
	cout << endl << "Average speed: " << speed << endl;
	return 0;
}
