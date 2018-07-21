/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 19, 2018, 8:29 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

double kineticEnergy(int, int);

int main()
{
	int Mass; 		
        int V;		
        
	cout << "This program calculates the amount of kinetic energy of an object." << endl;
	cout << "Enter the mass of object (in kilograms): ";
	cin  >> Mass;
	cout << "Enter the velocity of object (in meters per second): ";
	cin  >> V;
	cout << "This object has " << kineticEnergy(Mass, V) << " J." << endl;
	return 0;
}

//kineticEnergy
double kineticEnergy(int Mass, int V) {   
	return .5 * Mass * pow(V, 2);
}