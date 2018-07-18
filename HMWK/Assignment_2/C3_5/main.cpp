/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 26, 2018, 9:15 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    double MalesNumber = 0;
    double FemalsNumber = 0;
    double TotalNumber = 0;
    double MalesPercentage = 0;
    double FemalsPercentage = 0;
    
    cout << "Enter the total number of student in class." << endl;
    cin >> TotalNumber;
    cout << "Enter the number of Males student in class." << endl;
    cin >> MalesNumber;
    cout << "Enter the number of Females student in class." << endl;
    cin >> FemalsNumber;
    
    MalesPercentage = MalesNumber/TotalNumber;
    FemalsPercentage = FemalsNumber/TotalNumber;
    
    cout << "The percentage of males is: " << MalesPercentage << endl;
    cout << "The percentage of females is: " << FemalsPercentage << endl;
    
    
    return 0;
}

