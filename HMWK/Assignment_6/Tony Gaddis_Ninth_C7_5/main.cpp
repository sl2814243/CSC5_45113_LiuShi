/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 21, 2018, 10:31 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int monkeys = 3;
    const int days = 7;
    int food[monkeys][days];
    float pounds;
    float least;
    float most;
    float sum = 0;
    
    cout << "How many pounds of food each monkey eat per day." << endl;
    for (int row = 0; row < monkeys; row++) {
        for (int col = 0; col < days; col++) {
            do {
                cout << "Monkey Number" << (row + 1) << " on day" << (col + 1) << " eat: ";
                cin  >> pounds;
                if (pounds < 0) {
                    cout << "Error! Number of pounds must be greater than 0." << endl;
                }
            } while (pounds < 0);
            food[row][col] = pounds;
            sum += pounds;
        }
        cout << endl;							
    }
    
    least = most = food[0][0];
    for (int row = 0; row < monkeys; row++) {
        for (int col = 0; col < days; col++) {
            if (food[row][col] < least) { 
                least = food[row][col];
            }
            if (food[row][col] > most) { 
                most = food[row][col];
            }
        }
    }
    
    cout << fixed << showpoint << setprecision(1);
    cout << "Average food that eaten per day : " << sum / 21.0 << " pounds." << endl;
    cout << "Least food that eaten: " << least << " pounds." << endl;
    cout << "Greatest food that eaten: " << most << " pounds." << endl;

    return 0;
}

