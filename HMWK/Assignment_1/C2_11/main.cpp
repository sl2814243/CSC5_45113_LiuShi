#include <iostream>
using namespace std;

int main()
{
	double FullTank = 20,
		   Town 	= FullTank * 23.5,
		   Highway 	= FullTank * 28.9;

	cout << "On one tank of gas this car can travel a distance of ";
	cout << Town << " mlies in town, or " << Highway << " miles on a highway.";
	return 0;
}