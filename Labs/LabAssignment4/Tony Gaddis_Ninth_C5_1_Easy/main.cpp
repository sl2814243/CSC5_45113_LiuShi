/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 10, 2018, 2:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int InputNum;
    int SumNum;
    
    cout << "Please input a positive integer value" << endl;
    cin >> InputNum;
    
    if (InputNum > 0){
        for(int i = 1; i <= InputNum; i++){
        SumNum += i;
        }
    cout << SumNum << endl;
    }
    return 0;
}

