/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 26, 2018, 9:04 PM
 */

#include <iostream>
using namespace std;

int main() {
	int CaloriesPerCookie = (300 * 10) / 30;
        int CookiesAte;
        int Calories;

	cout << "How many total calories were consumed: ";
	cin  >> CookiesAte;

	Calories = CookiesAte * CaloriesPerCookie;
	cout << "You consumed " << Calories << " calories.\n";
	return 0;
}

