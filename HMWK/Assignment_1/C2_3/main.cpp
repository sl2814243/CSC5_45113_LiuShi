#include <iostream>
using namespace std;

int main()
{
	int 	PPrice	 = 95;
	double	State	 = PPrice * .04,
			County	 = PPrice * .02,
			TotalTax = State + County;

	cout << "Purchase Price = $" << PPrice << endl;
	cout << "State tax = $" << State << endl;
	cout << "County tax = $" << County << endl;
	cout << "Total Tax = $" << TotalTax << endl;
	return 0;
}