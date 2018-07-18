/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 27, 2018, 2:08 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    double WEIGHT_PER_WIDGET = 9.2;

    double PalletWeight;
    double FullWeight;
    int NumOfWidgets;

	cout << "How much does the pallet weigh by itself? ";
	cin  >> PalletWeight;
	cout << "How much does the pallet weigh with the widgets? ";
	cin  >> FullWeight;

	NumOfWidgets = (FullWeight - PalletWeight) / WEIGHT_PER_WIDGET;
	cout << "There are " << NumOfWidgets << " widgets stacked on the pallet.\n";
	return 0;

}

