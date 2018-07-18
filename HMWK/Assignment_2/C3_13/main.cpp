/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 26, 2018, 9:28 PM
 */

#include <iostream>
using namespace std;

int main()
{
	double YEN_PER_DOLLAR   = 98.93;
	double EUROS_PER_DOLLAR = .74;

		  double USd;
		  double Yen;
		  double Euros;

	
	cout << "To convert a U.S. dollar amount to Japanese yen and Euros." << endl;
        cout << "Please enter a amount in U.S. dollar: ";
	cin  >> USd;

	Yen = USd * YEN_PER_DOLLAR;
	Euros = USd * EUROS_PER_DOLLAR;

	cout << "$" << USd << " U.S. dollar is equivalent to " << Yen << " Yen and " << Euros << " Euros." << endl;
	return 0;
}

