#include <iostream>
using namespace std;

int main()
{
	double MealCost = 88.67,
		   Tax		= MealCost * .0675,
		   Tip 		= (MealCost + Tax) * .20,
		   TBill	= MealCost + Tax + Tip;

	cout << "Meal cost = $" << MealCost << endl;
	cout << "Tax amount = $" << Tax << endl;
	cout << "Tip amount = $" << Tip << endl;
	cout << "Total bill = $" << TBill << endl;
	return 0;
}