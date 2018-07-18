/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 7, 2018, 11:36 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int RandNum;
    int Seed;
    int Guess;
    Seed = time(0);
    RandNum = 1 + rand() % 1000; 

	cout << "I generated a random number. Can you guess what my number is? ";
	cin  >> Guess;

	while (Guess > RandNum) {
		cout << "Too high. Try again." << endl;
		cin  >> Guess;
	}
	while (Guess < RandNum) {
		cout << "Too low. Try again." << endl;
		cin  >> Guess;
	}


	cout << "Congratulations. You figured out my number." << endl;

	return 0;
}