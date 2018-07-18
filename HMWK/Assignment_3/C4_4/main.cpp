/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 1, 2018, 1:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	double Length1, Length2, Width1, Width2, Area1, Area2;

	cout << "This program determines which of two rectangles has the greater area, or if the areas are the same." << endl;
	cout << "Enter the length and width of rectangle #1:" << endl;
	cin  >> Length1 >> Width1;
	cout << "Enter the length and width of rectangle #2:" << endl;
	cin  >> Length2 >> Width2;

	Area1 = Length1 * Width1;
	Area2 = Length2 * Width2;

	if (Area1 == Area2)
		cout << "The areas of both rectangle’s are the same." << endl;
	else if (Area1 > Area2)
		cout << "The area of rectangle #1 is greater than rectangle #2." << endl;
	else
		cout << "The area of rectangle #2 is greater than rectangle #1." << endl;
	return 0;
}
