/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on March 20th, 2018, 10:05 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char num2Tst;//2-100
    bool prime;//Determine if num2Tst is prime
    
    //Initialize Variables
    num2Tst=rand()%99+2;//[2,100]
    
    //Process/Map inputs to outputs
    prime=num2Tst==2?true:num2Tst%2;
    prime=num2Tst==3?true:prime&&num2Tst%3;
    prime=num2Tst==5?true:prime&&num2Tst%5;
    prime=num2Tst==7?true:prime&&num2Tst%7;
    
    //Output data
    cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    
    //Exit stage right!
    return 0;
}