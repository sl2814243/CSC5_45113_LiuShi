/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 2, 2018, 2:47 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	double PecentCalFat;
	double FatGrams;
        double CaloriesFromFat;
        double TotalCalories;

	cout << "Please enter the number of calories in the food: ";
	cin  >> TotalCalories;
	cout << "Please enter the number of fat grams in the food: ";
	cin  >> FatGrams;

	CaloriesFromFat = FatGrams * 9;
	PecentCalFat = (CaloriesFromFat / TotalCalories) * 100;
        
	if (TotalCalories >= 0 && FatGrams >= 0) {
		if (FatGrams < TotalCalories) {
			cout << "Calories that come from fat: ";
			cout << PecentCalFat << "%." << endl;
			if (PecentCalFat < 30)
				cout << "This food is low in fat." << endl;
		}
		else
			cout << "Error!!! The calories or fat grams were incorrectly entered." << endl;
	}
	else
		cout << "The number of calories and the number of fat grams must be 0 or more." << endl;
	return 0;
}
