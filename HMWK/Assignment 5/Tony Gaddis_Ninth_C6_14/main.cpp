/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 20, 2018, 8:59 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int &, int &, double &);
void orderStatus(int, int , double);
void numInputError(string, int);

int main() {
	int Ordered;
	int InStock;
	double SpecShipg;

	getData(Ordered, InStock, SpecShipg);

	orderStatus(Ordered, InStock, SpecShipg);

	return 0;
}

//getData
void getData(int &Ordered, int &InStock, double &SpecShipg) {

	do {
		cout << "Enter the number of spools ordered: ";
		cin  >> Ordered;

		if(Ordered < 1) {
			numInputError("Spools ordered", 1);
		}

	} while (Ordered < 1);

	do {
		cout << "Enter the number of spools in stock: ";
		cin  >> InStock;

		if (InStock < 0)
		{
			numInputError("Spools in stock", 0);
		}
	} while (InStock < 0);

	do {
		cout << "Enter the amount of any special shipping and handling charges: ";
		cin  >> SpecShipg;

		if(SpecShipg < 0)
		{
			numInputError("Special Shiping", 0);
		}

	} while (SpecShipg < 0);
}

//orderStatus
void orderStatus(int Ordered, int InStock, double SpecShipg) {
	int 	Ready,
	    	Backorder;

	double	Shipg = 10.0,
	    	TotSellPrice,
	    	TotShipg,
	    	TotOrder;

	cout << "Number of ordered spools ready to ship from current stock : ";
	if (Ordered > InStock) {
		Backorder = Ordered - InStock;
		Ready = InStock;
	    cout << setw(11) << Ready << endl;
		cout << "Number of ordered spools on backorder                     : "
			 << setw(11) << Backorder << endl;
	}
	else {
		Ready = Ordered;
		cout << setw(11) << Ready << endl;
	}

	TotSellPrice = Ready * 100;

	TotShipg = Shipg + SpecShipg;

	TotOrder = TotSellPrice + TotShipg;

	cout << fixed << showpoint << setprecision(2);
	cout << "Total selling price of the portion ready to ship          : $"
	     << setw(10) << TotSellPrice << endl;
	cout << "Total shipping and handling on the portion ready to ship  : $"
         << setw(10) << TotShipg << endl;
    cout << "Total of the order ready to ship                          : $"
         << setw(10) << TotOrder << endl;
}

//numInputError
void numInputError(string Item, int Limit) {
	cout << "Error! Invalid number" << endl;
	cout << Item << " must be greater than " << Limit << "." << endl;

}

