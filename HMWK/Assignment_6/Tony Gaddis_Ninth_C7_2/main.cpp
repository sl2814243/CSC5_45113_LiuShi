/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 21, 2018, 10:21 AM
 */

#include <iostream>

#include <string>

using namespace std;

int main() {
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};  
    float rain[12] = {-1};
    float total = 0;   
    int min = 0;
    int max = 0;
    for(int i = 0; i < 12; ++i) {
        cout << "Enter rainfall for " << months[i] << ": ";
        cin >> rain[i];       
        while(rain[i] < 0) {           
            cout << "Invalid data please try again" << endl;           
            cout << "Enter rainfall for " << months[i] << ": ";            
            cin >> rain[i];          
        }
        
        total += rain[i];  
        if(rain[i] < rain[min]) {           
            min = i;       
        }
        else if(rain[i] > rain[max]) {          
            max = i;     
        }      
    }   
    cout << "Total rainfall: " << total << endl;
    
    double average = total / 12.0;
    
    cout << "Average monthly rainfall: " << average << endl;    
    cout << "Least rainfall in " << months[min] << endl;
    cout << "Most rainfall in " << months[max] << endl;
    
}
