/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 10, 2018, 2:34 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    int Days;
    int Size;
    float Daily;

	cout << "This program will predict the population of organisms." << endl;
        cout << "What is the starting number of organisms? ";
	cin  >> Size;
	cout << "What is the average daily population increase (as a percentage of current population)? ";
	cin  >> Daily;
	cout << "Enter the number of days of growth: ";
	cin  >> Days;

	while (Size < 2 || Daily < 0 || Days < 1) {
		if (Size < 2) {
			cout << "Error! Starting size of population must be greater than 2." << endl;
			cout << "What is the starting number of organisms? ";
			cin  >> Size;
		}
		else if (Daily < 0) {
			cout << "Error! Average daily population increase must be greater than 0." << endl;
			cout << "What is the average daily population increase? (as a percentage of current population)? ";
			cin  >> Daily;
		}
		else if (Days < 1) {
			cout << "Error! Number of days must be greater than 0.\n-5";
			cout << "Enter the number of days of growth: ";
			cin  >> Days;
		}
	}

	cout << "Table displaying population increase over " << Days << " days." << endl;
        cout << "      Day              Size of population" << endl;

	for (int X = 1; X <= Days; X++) {
		cout << "      " << setw(2) << X << "                      "
			 << Size << endl; 
		Size *= (1 + (Daily / 100));
	}
	return 0;
}

