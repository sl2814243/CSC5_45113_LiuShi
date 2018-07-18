/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 27, 2018, 1:53 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string Mth1;
	string Mth2;
	string Mth3;
	double RainMth1;
	double RainMth2;
	double RainMth3;  
	double Avg;

	
	cout << "This program calculates the average monthly rainfall for three months" << endl;
	cout << "Enter the name of the first month: ";
	cin  >> Mth1;
	cout << "Enter the amount of rainfall" << endl;
	cout << "(in inches) that fell in " << Mth1 << ": ";
	cin  >> RainMth1;

	cout << "Enter the name of the second month: ";
	cin  >> Mth2;
	cout << "Enter the amount of rainfall" << endl;
	cout << "(in inches) that fell in " << Mth2 << ": ";
	cin  >> RainMth2;

	cout << "Enter the name of the third month: ";
	cin  >> Mth3;
	cout << "Enter the amount of rainfall" << endl;
	cout << "(in inches) that fell in " << Mth3 << ": ";
	cin  >> RainMth3;

	Avg = (RainMth1 + RainMth2 + RainMth3) / 3;
	cout << "The average monthly rainfall for ";
	cout << Mth1 << ", " << Mth2 << ", and " << Mth3 << " was ";
	cout << fixed << setprecision(2) << Avg << " inches." << endl;
	return 0; 
}