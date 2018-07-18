/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 7, 2018, 11:30 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
	int Pop;  					

	cout << "People growth (each * represents 1000 people)" << endl;

	for (int Year = 1; Year <= 6; Year++) {  
		switch (Year) {
			case 1 : cout << "1900 ";
					 break;
			case 2 : cout << "1920 ";
					 break;
			case 3 : cout << "1940 ";
					 break;
			case 4 : cout << "1960 ";
					 break;
			case 5 : cout << "1980 ";
					 break;
			case 6 : cout << "2000 ";
					 break;
		}					 
		Pop /= 1000;        
		for (int Arisk = 1; Arisk <= Pop; Arisk++){  
			cout << "*";
		}

		cout << endl;
	}				
	return 0;
}

