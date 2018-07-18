/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 1, 2018, 1:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	double Weight, Mass;

	cout << "Calculate the weight of an object." << endl;
        cout << "Enter the object's mass: " << endl;
	cin  >> Mass;

	Weight = Mass * 9.8;

	cout << "This object weights " << Weight << " Newtons." << endl;
	if (Weight > 1000)
		cout << "It is too heavy." << endl;
	else if (Weight < 10)
		cout << "It is too light." << endl;	
	return 0;
}
