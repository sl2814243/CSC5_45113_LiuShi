/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 20, 2018, 8:45 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

double stockProfitLoss(int, double, double, double, double);

int main() {
    int   NumOfShares;
    float ProfitLoss;
    float PurchPrice;
    float PurchComm;
    float SalePrice;
    float SaleComm;
    
    cout << "What is the number of shares? ";
    cin  >> NumOfShares;
    cout << "What is the purchase price per share? ";
    cin  >> PurchPrice;
    cout << "What is the purchase commission paid? ";
    cin  >> PurchComm;
    cout << "What is the sale price per share? ";
    cin  >> SalePrice;
    cout << "What is the sale commission paid? ";
    cin  >> SaleComm;
    
    ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm, SalePrice,
            SaleComm);
    
    cout << "The profit / loss from the sale of stock is $";
    cout << fixed << showpoint << setprecision(2);
    cout << ProfitLoss << endl << endl;
    
    return 0;
}

//stockPrifitLoss
double stockProfitLoss(int NumOfShares, double PurchPrice, double PurchComm, double SalePrice, double SaleComm) {
    return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
            + PurchComm);
}