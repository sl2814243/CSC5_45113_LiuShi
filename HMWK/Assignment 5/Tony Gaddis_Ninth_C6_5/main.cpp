/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 19, 2018, 8:25 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double GRAVITY = 9.8;
double fallingDistance(int);

int main() {
    cout << "    Time        Distance" << endl;
    cout << "(in seconds)   (in meters)" << endl;
    cout << "---------------------------" << endl;
    
    for(int T = 1; T <= 10; T++) {
        cout << "    " << setw(3) << T << "           " << fixed << setprecision(0) << setw(4) << fallingDistance(T) << endl;
    }
    cout << endl;
    return 0;
}
//fallingDistance
double fallingDistance(int T) {
    return .5 * GRAVITY * pow(T, 2);
}

