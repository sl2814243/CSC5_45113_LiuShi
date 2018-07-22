/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 21, 2018, 10:19 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[10];
    int maximum = -10000000, minimum = 1000000000;
    
    for(int i=0 ;i<10;++i){
        
        cout << "Enter Number " << (i+1) << ": ";
        cin >> arr[i];
        
        if(arr[i] > maximum)
            maximum = arr[i];
        
        if(arr[i] < minimum)
            minimum = arr[i];
    }
    
    cout << "The largest value entered is: " << maximum << endl;
    cout << "The smallest value entered is: " << minimum;
    
    return 0;
}

