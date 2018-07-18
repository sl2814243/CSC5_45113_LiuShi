/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 10, 2018, 2:49 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float RATE = 0.04;
    float Charge = 2500.0;
    int Year;
    float YrRate;

	cout << "Country club projected rates for the next six years" << endl;
        cout << "      Year       Rate" << endl;


	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = Charge * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
	return 0;
}


