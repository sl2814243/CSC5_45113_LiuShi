/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 1, 2018, 1:53 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	int SEC_IN_DAY = 86400;
	int SEC_IN_HR  = 3600;
	int SEC_IN_MIN = 60;
	
	int Days;
        int Hours;
        int Minutes;
        int Seconds;

	cout << "Enter a number of seconds: ";
	cin  >> Seconds;

	if (Seconds >= SEC_IN_DAY) {
		Days = Seconds / SEC_IN_DAY;
		cout << "There is " << Days << " days in " << Seconds << " seconds." << endl;
	}
	else if (Seconds >= SEC_IN_HR) {
		Hours = Seconds / SEC_IN_HR;
		cout << "There is " << Hours << " hours in " << Seconds << " seconds." << endl;
	}
	else if (Seconds >= SEC_IN_MIN) {
		Minutes = Seconds / SEC_IN_MIN;
		cout << "There is " << Minutes << " minutes in " << Seconds << " seconds." << endl;
	}
	return 0;
	}
