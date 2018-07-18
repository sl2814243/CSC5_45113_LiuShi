/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on June 27, 2018, 1:58 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	double THEATER_PERCECT = .20;
	double PRICE_ADULT = 10.00;
	double PRICE_CHILD = 6.00;

	string Movie;

	double Adult;
	double Child;
	double GrossBOP;
	double AmtToDistributor;
	double NetBOP;

	cout << "What is the name of the movie? ";
	getline(cin, Movie);
	cout << "How many adult tickets where sold? ";
	cin  >> Adult;
	cout << "How many child tickets where sold? ";
	cin  >> Child;

	GrossBOP = (Adult * PRICE_ADULT) + (Child * PRICE_CHILD);
	AmtToDistributor = GrossBOP - (GrossBOP * THEATER_PERCECT);
	NetBOP = GrossBOP * THEATER_PERCECT;

	cout << "Movie Name:			\"" << Movie << "\"\n";
	cout << left;
	cout << "Adult Tickets Sold:		 " << Adult << endl;
	cout << "Child Tickets Sold:		 " << Child << endl;
	cout << "Gross Box Office Profit:	 $"  << GrossBOP << endl;
	cout << "Amount Paid to Distributor:	 $"  << NetBOP << endl;
	cout << "Net Bow Office Profit:		 $"  << AmtToDistributor << endl;
	return 0;
}

