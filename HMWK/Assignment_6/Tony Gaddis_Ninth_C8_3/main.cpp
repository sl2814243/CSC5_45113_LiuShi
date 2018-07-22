/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 22, 2018, 9:17 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int searchList(int [], int, int);

int main() {
	const int Nums = 10;
	int Picks[Nums] = {13579, 26791, 26792, 33445, 55555,
			   62483, 77777, 79422, 85647, 93121};

	int WinNums;		
        int Search;			

	cout << "Enter winning five-digit number of this week: ";
        
	cin  >> WinNums;

	Search = searchList(Picks, Nums, WinNums);
	if (Search == -1)
		cout << "Sorry, no winning ticket this week."  << endl;
	else {
		cout << "Congratulations! You win the five-digit number: "  << Picks[Search] << endl;
	}

	return 0;
}

//searchList
int searchList(int array[], int size, int value) {
	int position = -1;					
	int first = 0;						
	int last = size - 1;				
	int middle;						
	bool found = false;					

	while (!found && first <= last) {
		middle = (first + last) / 2; 	
		if (array[middle] == value) {
			position = middle;			
			found = true;				
		}
		else if (array[middle] > value)	
			last = middle - 1;
		else 							
			first = middle + 1;
	}
	return position;					
}