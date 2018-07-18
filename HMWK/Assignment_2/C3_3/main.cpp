/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 26, 2018, 9:10 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int Num1;
    int Num2;
    int Num3;
    int Num4;
    int Num5;
    int Average;
    
    cout << "Enter five test scores." << endl;
    cin >> Num1 >> Num2 >> Num3 >> Num4 >> Num5;
    Average = (Num1 + Num2 + Num3 + Num4 + Num5)/5;
    cout << "The average of five test scores is: " << Average;
}

