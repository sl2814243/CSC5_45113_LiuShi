/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 1, 2018, 1:34 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	int Month, Day, Year;

	cout << "Enter (in numeric form) a month, a day, and a two digit year, and the program will determine if the date is magic" << endl;
	cout << "Enter a month: ";
	cin  >> Month;
	cout << "Enter a day: ";
	cin  >> Day;
	cout << "Enter a Year";
	cin  >> Year;

	if (Year == Month * Day)
		cout << "The date is magic." << endl;
	else
		cout << "The date is not magic." << endl;
	return 0;
}
