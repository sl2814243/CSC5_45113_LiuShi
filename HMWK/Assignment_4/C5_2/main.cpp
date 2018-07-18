/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 6, 2018, 2:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int InputNum;
    int Begin = 32;
    
    for(int i = 0; i < 6; i++){
        InputNum = Begin + 16;
        for(int ASCII = Begin; ASCII < InputNum; ASCII++){
            cout << static_cast<char>(ASCII) << " ";
        }
        Begin = InputNum;
        cout << endl;
    }
    return 0;
}

