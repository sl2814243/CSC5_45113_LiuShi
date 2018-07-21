/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 19, 2018, 8:07 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
float cal();

int main(int argc, char** argv) {
    
    double RetalPrice;
    RetalPrice = cal();
    cout << fixed << showpoint << setprecision(2);
    cout << "The retail price is " << RetalPrice << "$." << endl;
    return 0;
}


float cal() {
    float Cost;
    float Markup;

    do {
        cout << "What is the item's wholesale cost? ";
        cin  >> Cost;
        if (Cost < 0) {
            cout << "Error!" << endl;
            cout << "Wholesale cost must be a positive number." << endl;
        }
    } while (!(Cost > 0));
    
    do {
        cout << "What is the item's markup percentage? ";
        cin  >> Markup;
        if (Markup < 0) {
            cout << "Error!" << endl;
            cout << "The markup percentage must be a positive number." << endl;	
        }
    } while (!(Markup > 0));
    
    Markup /= 100;
    return Cost * (1 + Markup);
}