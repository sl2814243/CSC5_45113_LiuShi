/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 30, 2018, 11:03 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    double PumpPrice;
    double BasePrice;
    double TotalTax;
    double PercentPrice;
    double FedTax = 18.4;
    double StateTax = 41.7;
    double StateSalesTax = 0.0225;
    
    cout << "What is the base price: " << endl;
    cin >> BasePrice;
    TotalTax = FedTax + StateTax;
    PercentPrice = (TotalTax/BasePrice) * 100;
    PumpPrice = BasePrice + FedTax + StateTax + (BasePrice * StateSalesTax);
    
    cout << "The base price for a gallon of gas = " << BasePrice << " $" << endl; 
    cout << "The total tax on a gallon of gas = " << TotalTax << " $" << endl;
    cout << "Percentage price due to gas tax =" << PercentPrice << " %" << endl;
    cout << "Oil Company profit range = " << PumpPrice << " %" << endl;
    
    return 0;
}

