/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 2, 2018, 2:34 PM
 */

#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	double RETAIL_PRICE = 99;

	int Units;
	double RetailCost; 
	double TotalCost;

	cout << "To compute the total cost of the purchase" << endl;
	cout << "enter the number of units purchased: ";
	cin  >> Units;

	if (Units > 0) {
			RetailCost = Units * RETAIL_PRICE;
			cout << fixed << showpoint << setprecision(2);
		}
		if (Units >= 10 && Units <= 19) {
			TotalCost = RetailCost - (RetailCost * .20);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 20 && Units <= 49) {
			TotalCost = RetailCost - (RetailCost * .30);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 50 && Units <= 99) {
			TotalCost = RetailCost - (RetailCost * .40);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 100) {
			TotalCost = RetailCost - (RetailCost * .50);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
	else
		cout << "Total cost of the purchase: $" << RetailCost << endl;
	
	return 0;
}

