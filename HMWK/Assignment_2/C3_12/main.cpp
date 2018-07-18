/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 27, 2018, 1:47 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    double Celsius;
    double Fahrenheit;
    
    cout << "F is the Fahrenheit temperature, and C is the Celsius temperature." << endl;
    cout << "Write a Celsius temperatures." << endl;
    cin >> Celsius;
  
    Fahrenheit = ((9/5)*Celsius)+32;
    
    cout << "Fahrenheit temperature is: " << Fahrenheit << endl;
    

    return 0;
}

