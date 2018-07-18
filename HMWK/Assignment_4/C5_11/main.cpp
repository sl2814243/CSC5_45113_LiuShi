/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 7, 2018, 11:21 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    int Days;
    int SizeOfPop;
    double DailyIncrease;

	cout << "This program will predict the population of organisms." << endl;
        cout << "What is the starting number of organisms? ";
	cin  >> SizeOfPop;
	cout << "What is the average daily population increase (as a percentage of current population)? ";
	cin  >> DailyIncrease;
	cout << "Enter the number of days of growth: ";
	cin  >> Days;

	while (SizeOfPop < 2 || DailyIncrease < 0 || Days < 1) {
		if (SizeOfPop < 2) {
			cout << "Error! Starting size of population must be greater than 2." << endl;
			cout << "What is the starting number of organisms? ";
			cin  >> SizeOfPop;
		}
		else if (DailyIncrease < 0) {
			cout << "Error! Average daily population increase must be greater than 0." << endl;
			cout << "What is the average daily population increase? (as a percentage of current population)? ";
			cin  >> DailyIncrease;
		}
		else if (Days < 1) {
			cout << "Error! Number of days must be greater than 0.\n-5";
			cout << "Enter the number of days of growth: ";
			cin  >> Days;
		}
	}

	cout << "Table displaying population increase over " << Days << " days." << endl;
        cout << "      Day              Size of population" << endl;
	cout <<"--------------------------------------------------" << endl;

	for (int X = 1; X <= Days; X++) {
		cout << "      " << setw(2) << X << "                      "
			 << SizeOfPop << endl; 
		SizeOfPop *= (1 + (DailyIncrease / 100));
	}
	return 0;
}
