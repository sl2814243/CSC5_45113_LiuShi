/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 19, 2018, 8:20 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main() {
    int North, South, East, West, Central;
    
    North   = getNumAccidents("North");
    South   = getNumAccidents("South");
    East    = getNumAccidents("East");
    West    = getNumAccidents("West");
    Central = getNumAccidents("Central");
    
    findLowest(North, South, East, West, Central);
    
    return 0;
}

//getNumAccidents
int getNumAccidents(string Region) {
    int Accidents;
    
    do {
        cout << "How many traffic accidents were reported in the " << Region << " region during last year? ";
        cin  >> Accidents;
        
        if (Accidents < 0) {
            cout << "Invalid report!" << endl;
            cout << "Accident number must be greater than 0." << endl;
        }
        
    } while (!(Accidents > 0));
    cout << endl;
    return Accidents;
}

//findLowest
void findLowest(int North, int South, int East, int West, int Central) {
    int Lowest;
    
    cout << "\nThe fewest reported traffic accidents last year were in\nthe ";
    
    if(North < South && North < East && North < West && North < Central) {
        Lowest = North;
        cout << "North ";
    }
    else if(South < North && South < East && South < West && South < Central) {
        Lowest = South;
        cout << "South ";
    }
    else if(East < North && East < South && East < West && East < Central) {
        Lowest = East;
        cout << "East ";
    }
    else if(West < North && West < East && West < South && West < Central)
    {
        Lowest = West;
        cout << "West ";
    }
    else {
        Lowest = Central;
        cout << "Central ";
    }
    
    cout << "region which had " << Lowest << " reported traffic accidents.\n\n";
}

