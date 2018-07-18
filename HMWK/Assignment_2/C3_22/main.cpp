/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 27, 2018, 2:14 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double Angle;
	double Sin;
	double Cos;
	double Tan;

	cout << "To calculates the sine, cosine and tangent of an angle please enter the angle in radians: " << endl;
	cin  >> Angle;

	Sin = sin(Angle),
	Cos = cos(Angle),
	Tan = tan(Angle);

	cout << "Angle  : " << Angle << endl;
	cout << "Sine   : " << Sin << endl;
	cout << "Cosine : " << Cos << endl;
	cout << "Tangent: " << Tan << endl;
	return 0;
}

