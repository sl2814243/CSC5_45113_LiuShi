/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 12, 2018, 1:30 PM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * 
 */

void question1() {
    cout<<"Sum of Number"<<endl;
    
    int InputNum;
    int SumNum;
    
    cout << "Please input a positive integer value" << endl;
    cin >> InputNum;
    
    if (InputNum > 0){
        for(int i = 1; i <= InputNum; i++){
            SumNum += i;
        }
        cout << SumNum << endl;
    }
}
void question2() {
    cout<<"Characters for the ASCII Codes" << endl;
    
    int Input;
    int Begin = 32;
    
    for(int i = 0; i < 6; i++){
        Input = Begin + 16;
        for(int ASCII = Begin; ASCII < Input; ASCII++){
            cout << static_cast<char>(ASCII) << " ";
        }
        Begin = Input;
        cout << endl;
    }
}
void question3() {
    cout << "Ocean Levels" << endl;
    
    int Year;
    float Risen = 0.0;
    
    cout << "Table showing the total number of millimeters the oceans will have risen each year for the next 25 years." << endl;
    cout << "    Year        Amount Risen (millimeters)" << endl;
    
    for(Year = 1; Year <= 25; Year++) {
        Risen += 1.5;
        cout << right << fixed << showpoint << setprecision(1)
                << setw(7) << Year << setw(16) << Risen << endl;
    }
}
void question4() {
    cout << "Calories Burned" << endl;
    
    float CalCost = 3.6;
    
    int Min;
    int Burnt = 0;
    
    cout << "Table displaying number of calories burnt on a treadmill that burns 3.9 calories per minute." << endl;
    cout << "   Minutes Ran      Calories Burnt" << endl;
    cout << "------------------------------------------" << endl;
    
    for(Min = 5; Min <= 30; Min += 5)
    {
        Burnt = Min * CalCost;
        cout << "        "<< Min << "               " << Burnt << endl; 
    }
}
void question5() {
    cout << "Membership Fees Increase" << endl;
    
    float RATE = 0.04;
    float Charge = 2500.0;
    int Year;
    float YrRate;
    
    cout << "Country club projected rates for the next six years" << endl;
    cout << "      Year       Rate" << endl;
    
    
    for(Year = 1; Year <= 6; Year++)
    {
        YrRate = Charge * (1 + Year * RATE);
        cout << "       " << Year << "         " << YrRate << endl;
    }
    cout << endl;
}
void question6() {
    cout << "Distance Traveled" << endl;
    
    int Speed;
    int Hours;
    int Dist = 0; 	
    
    cout << "What is the speed of the vehicle in mph? ";
    cin  >> Speed;
    cout << "How man hours has it traveled? ";
    cin  >> Hours;
    
    if (Speed >= 0 && Hours >= 1) {
        cout << "Hour   Distance Traveled" << endl;
        
        for (int X = 1; X <= Hours; X++) {
            Dist += Speed;
            cout << right << setw(4) << X << "        ";
            cout << setw(6) << Dist << endl;
        }
    }
}
void question7(){
    cout << "Population" << endl;
    
    int Days;
    int Size;
    float Daily;
    
    cout << "This program will predict the population of organisms." << endl;
    cout << "What is the starting number of organisms? ";
    cin  >> Size;
    cout << "What is the average daily population increase (as a percentage of current population)? ";
    cin  >> Daily;
    cout << "Enter the number of days of growth: ";
    cin  >> Days;
    
    while (Size < 2 || Daily < 0 || Days < 1) {
        if (Size < 2) {
            cout << "Error! Starting size of population must be greater than 2." << endl;
            cout << "What is the starting number of organisms? ";
            cin  >> Size;
        }
        else if (Daily < 0) {
            cout << "Error! Average daily population increase must be greater than 0." << endl;
            cout << "What is the average daily population increase? (as a percentage of current population)? ";
            cin  >> Daily;
        }
        else if (Days < 1) {
            cout << "Error! Number of days must be greater than 0.\n-5";
            cout << "Enter the number of days of growth: ";
            cin  >> Days;
        }
    }
    
    cout << "Table displaying population increase over " << Days << " days." << endl;
    cout << "      Day              Size of population" << endl;
    
    for (int X = 1; X <= Days; X++) {
        cout << "      " << setw(2) << X << "                      "
                << Size << endl; 
        Size *= (1 + (Daily / 100));
    }
}
void question8(){
    cout << "Population Bar Chart" << endl;
    
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
}
void question9() {
    cout << "Random Number Guessing Game" << endl;
    
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
}
void question10() {
    cout << "Random Number Guessing Game Enhancement" << endl;
    
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
}

int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Display menu
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for C5_1 Sum of Number"<<endl;
    cout<<"Type 2 for C5_2 Characters for the ASCII codes"<<endl;
    cout<<"Type 3 for C5_3 Ocean Levels"<<endl;   
    cout<<"Type 4 for C5_4 Calories Burned"<<endl;
    cout<<"Type 5 for C5_5 Membership Fees Increase"<<endl;
    cout<<"Type 6 for C5_6 Distance Traveled"<<endl;
    cout<<"Type 7 for C5_11 Population"<<endl;
    cout<<"Type 8 for C5_18 Population Bar Chart"<<endl;
    cout<<"Type 9 for C5_20 Random Number Guessing Game"<<endl;
    cout<<"Type 10 for C5_21 Random Number Guessing Game Enhancement"<<endl;
    cin>>choice;
    
    //Process/Map inputs to outputs
    if(choice>=1&&choice<=10){
        switch(choice) {
            case 1: {
                question1();
                break;
            }
            case 2:{
                question2();
                break;
            }
            case 3:{
                question3();
                break;
            }
            case 4:{
                question4();
                break;
            }
            case 5:{
                question5();
                break;
            }
            case 6:{
                question6();
                break;
            }
            case 7:{
                question7();
                break;
            }
            case 8:{
                question8();
                break;
            }
            case 9:{
                question9();
                break;
            }
            case 10:{
                question10();
                break;
            }
        }
    }
    
    else {
        cout<<"Exiting Menu"<<endl;
    }
    //Exit stage right!
    return 0;
}

