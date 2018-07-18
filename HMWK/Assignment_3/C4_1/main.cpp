/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 1, 2018, 1:24 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int num1;
    int num2;
    
    cout << "Enter two numbers" << endl;
    cin >> num1;
    cin >> num2;
    
    if(num1 > num2) {
        cout << "The larger number is: " << num1 << endl;
        cout << "The smaller number is: " << num2 << endl;
    }
    if(num2 > num1) {
        cout << "The larger number is: " << num2 << endl;
        cout << "The smaller number is: " << num1 << endl;
    }
    
    return 0;
}

