/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 2, 2018, 2:31 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main()
{
	int Num1, Num2, Input, Sum;
	unsigned seed = time(0);

	srand(seed);
	Num1 = 100 + rand() % 50;
	Num2 = 100 + rand() % 50;

	cout << "Enter the sum of the following numbers:" << endl;
	cout << "  " << Num1 << endl;
	cout << "+ " << Num2 << endl;
	cout << "  __\n  ";
	cin  >> Input;

	Sum = Num1 + Num2;
	if (Input == Sum)
		cout << "\nCongratulations! " << Input << " is the correct answer." << endl;
	else
	{
		cout << "\nIncorrect answer!" << endl;
		cout << Num1 << " + " << Num2 << " = " << Sum << endl;
	}

	return 0;
}

