/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 26, 2018, 8:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(){
    double Gallons;
    double Miles;
    double MilesPerGallon;
    
	cout << "Enter the number of gallons that can hold: ";
	cin  >> Gallons;
	cout << "Enter the number of miles that can drive: ";
	cin  >> Miles;
    
    MilesPerGallon = Miles/Gallons;
    
    cout << MilesPerGallon << endl;
}

