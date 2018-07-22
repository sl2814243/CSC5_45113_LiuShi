/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 22, 2018, 9:24 AM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Data{
    string Name;
    float Amt;
    
};

void getData(Data[], int);
void displayReport(Data[], int);
void selectionSort(Data[], int);

int main() {
    
    const int mths = 12;
    Data rainfall[mths] = {"January", 0, "February", 0, "March", 0,
    "April", 0,   "May", 0,      "June", 0,
    "July", 0,    "August", 0,   "September", 0,
    "October", 0, "November", 0, "December", 0};
    
    getData(rainfall, mths);
    selectionSort(rainfall, mths);
    displayReport(rainfall, mths);
    
    return 0;
}


void getData(Data rainfall[], int mths) {
    float rain;
    
    cout << "Enter the total rainfall for each of 12 months." << endl;
    for (int i = 0; i < mths; i++) {
        do {
            cout << "Month #" <<  (i + 1) << ": ";
            cin >> rain;
            
            if (rain < 0)
                cout << "Error! Rainfall amounts must be greater than 0.\n";
            
        } while(rain < 0);
        
        rainfall[i].Amt = rain;
    }	 
}


void selectionSort(Data array[], int size) {
    Data temp;
    bool swap;
    
    do {swap = false;
    for (int count = 0; count < (size - 1); count++) {
        if (array[count].Amt < array[count + 1].Amt) {
            temp = array[count];
            array[count] = array[count + 1];
            array[count + 1] = temp;
            swap = true;
        }
    }
    } while (swap);
} 


void displayReport(Data R[], int S) {
    cout << "2010 Rain Report for Never snows County sorted in order of rainfall from highest to lowest." << endl;
    cout << "        Month             Rainfall Amounts" << endl;
    cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < S; i++)
    {
        cout << "        " << left << setw(9) << R[i].Name << "              "
                << R[i].Amt << endl;
    }
    
}