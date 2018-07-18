/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 6, 2018, 2:28 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    int Year;
    double Risen = 0.0;

	cout << "Table showing the total number of millimeters the oceans will have risen each year for the next 25 years." << endl;
		 cout << "    Year        Amount Risen" << endl;
		 cout << "                (millimeters)" << endl;
		 cout << "-----------------------------" << endl;

	for(Year = 1; Year <= 25; Year++) {
		Risen += 1.5;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}
	return 0;
}
