/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 7, 2018, 11:42 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

/*
 * 
 */
int main() {
    int Random;
    int Guess;
    int Seed;
    int Tries = 0;

	Seed = time(0);
	srand(Seed);
	Random = 1 + rand() % 1000;

	cout << "I generated a number, can you guess what my number is? ";
	do {
		cin  >> Guess;
		Tries++;
		if (Guess < Random)
			cout << "Too low. Try again." << endl;
		if (Guess > Random)
			cout << "Too High. Try again." << endl;

	} while (Guess != Random);
	cout << "Congratulations. You tried my number in " << Tries << " times." << endl;
        
	return 0;
}