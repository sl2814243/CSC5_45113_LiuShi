/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 20, 2018, 8:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
bool isPrime(int);
int main(int argc, char** argv) {
    int Num;
    
    cout << "This program let you know if the number entered is a prime number or not." << endl;
    cout << "Please enter a number: " << endl; 
    cin  >> Num;
    
    cout << "The number " << Num;
    
    if (isPrime(Num)) {
        cout << " is a Prime number." << endl;
    }
    else
        cout << " is not a Prime number." << endl;
    
    return 0;
}

//isPrime
bool isPrime(int Num) {
    if (Num > 1) {
        for (int i = 2; i <= Num; ++i) {
            
            if (Num % i == 0) {
                if(Num == i)
                    return true;
                else
                    return false;
            }
            
        }
    }
    return false;
}
