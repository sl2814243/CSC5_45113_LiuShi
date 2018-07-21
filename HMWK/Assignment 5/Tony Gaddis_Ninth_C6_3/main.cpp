/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 19, 2018, 8:15 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


float getSales(string);
void findHighest(double, double, double, double);

int main() {
	double NE, SE, NW, SW;
        
	NE = getSales("Northeast");
	SE = getSales("Southeast");
	NW = getSales("Northwest");
	SW = getSales("Southwest");

	findHighest(NE, SE, NW, SW);
	return 0;
}

//getSales
float getSales(string Division) {
	float Sales;

	do {
	cout << "What is the " << Division;
    	cout << " division's quarterly sales figure? ";
    	cin  >> Sales;

    	if (Sales < 0.00)
    	cout << "Error! Invaid sales figure." << endl;
    	cout << "Dollar amount must be greater than $0.00" << endl;

    } while (!(Sales > 0.00));
    return Sales;
}

//findHighest
void findHighest(double NE, double SE, double NW, double SW) {
	double Hightest;
 
 	cout << "The Hightest grossing division is the ";

	if (NE > SE && NE > NW && NE > SW) {
		Hightest = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW) {
		Hightest = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW) {
		Hightest = NW;
		cout << "Northwest ";
	}
	else {
		Hightest = SW;
		cout << "Southwest ";
	}
    
	cout << fixed << showpoint << setprecision(2);
	cout << "division with $" << Hightest << " in sales." << endl;
}

