#include <iostream>
using namespace std;

int main()
{
	double Cost 	 = 14.95,
		   PProfit	 = .35,
		   SellPrice = Cost * (1 + PProfit);

	cout << "The selling price on a circuit board ";
	cout << "that costs $" << Cost << " is $" << SellPrice;
	return 0; 
}