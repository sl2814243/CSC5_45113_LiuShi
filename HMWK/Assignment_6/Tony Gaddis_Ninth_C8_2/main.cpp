/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 22, 2018, 9:09 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int searchList(int[], int, int);

int main() {
	const int Nums = 10;
	int Picks[Nums] = {13579, 26791, 26792, 33445, 55555,
                           62483, 77777, 79422, 85647, 93121};

	int WinNums;	
	int Search;

	cout << "Enter five-digit number that this week win: ";
	cin  >> WinNums;

	Search = searchList(Picks, Nums, WinNums);

	if (Search == -1)
		cout << "Sorry, no winning ticket this week." << endl;
	else {
		cout << "Congratulations! You win the five-digit number: " << Picks[Search] << endl;
	}

	return 0;
}


int searchList(int list[], int size, int value) {
	int in = 0;			
	int pos = -1;		
	bool found = false;		

	while (in < size && !found) {
		if (list[in] == value) {
			pos = in;		
			found = true;			
		}
		in++;					
	}
	return pos;			
}
