/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 2, 2018, 2:37 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
	double MONTHLY_CHARGE = 10;

	int ChecksWritten;
	double BankFees;

	cout << "Compute your Bank's fees for month." << endl;
	cout << "Enter the number of checks written during the past month: ";
	cin  >> ChecksWritten;

	if (ChecksWritten >= 0) {
		cout << fixed << showpoint << setprecision(2);
		if (ChecksWritten < 20) {
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.10);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else if (ChecksWritten < 40) {
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.08);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else if (ChecksWritten < 60) {
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.06);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else {
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.04);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
	}
	else {	
		cout << "Invalid input! Number of checks cannot be less then 0." << endl;       	 
	}
	return 0;
}

