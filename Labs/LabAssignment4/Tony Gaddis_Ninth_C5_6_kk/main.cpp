/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 10, 2018, 2:50 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    int Speed;
    int Hours;
    int Dist = 0; 	

	cout << "What is the speed of the vehicle in mph? ";
	cin  >> Speed;
	cout << "How man hours has it traveled? ";
	cin  >> Hours;

	if (Speed >= 0 && Hours >= 1) {
		cout << "Hour   Distance Traveled" << endl;

		for (int X = 1; X <= Hours; X++) {
			Dist += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Dist << endl;
		}
	}
	return 0;
}
