/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 10, 2018, 2:46 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float CalCost = 3.6;

	int Min;
        int Burnt = 0;

	cout << "Table displaying number of calories burnt on a treadmill that burns 3.9 calories per minute." << endl;
	cout << "   Minutes Ran      Calories Burnt" << endl;
	cout << "------------------------------------------" << endl;

	for(Min = 5; Min <= 30; Min += 5)
	{
		Burnt = Min * CalCost;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	return 0;
}