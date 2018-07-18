/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 10, 2018, 2:40 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int Input;
    int Begin = 32;
    
    for(int i = 0; i < 6; i++){
        Input = Begin + 16;
        for(int ASCII = Begin; ASCII < Input; ASCII++){
            cout << static_cast<char>(ASCII) << " ";
        }
        Begin = Input;
        cout << endl;
    }
    return 0;
}

