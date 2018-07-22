/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 21, 2018, 10:26 AM
 */
#include <iostream>

using namespace std;

/*
 * 
 */
void largerThanN(int array[], int size, int n){
    int i;
    cout << "The elements of the array greater than n are:" << endl;
    for(i = 0; i < size; i++){
        if(array[i] > n) cout << array[i] << endl;
    }
}

int main(void){
    int arr[] = {1,2,6,4,3,7,5};
    int n = 4;
    largerThanN(arr,6,n);
}
