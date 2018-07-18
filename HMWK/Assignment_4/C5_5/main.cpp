/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 7, 2018, 11:11 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    double RATE = 0.04;
    double CURRENT_CHARGE = 2500.0;
    int Year;
    double YrRate;

	cout << "Country club projected rates for the next six years" << endl;
        cout << "      Year       Rate" << endl;


	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
	return 0;
}

