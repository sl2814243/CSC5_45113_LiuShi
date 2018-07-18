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
    prime=true;
    
    //Process/Map inputs to outputs
    prime=num2Tst==2?true&&prime:prime&&num2Tst%2;
    prime=num2Tst==3?true&&prime:prime&&num2Tst%3;
    prime=num2Tst==4?true&&prime:prime&&num2Tst%4;
    prime=num2Tst==5?true&&prime:prime&&num2Tst%5;
    prime=num2Tst==6?true&&prime:prime&&num2Tst%6;
    prime=num2Tst==7?true&&prime:prime&&num2Tst%7;
    prime=num2Tst==8?true&&prime:prime&&num2Tst%8;
    prime=num2Tst==9?true&&prime:prime&&num2Tst%9;
    prime=num2Tst==10?true&&prime:prime&&num2Tst%10;
    
    //Output data
    cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    
    //Exit stage right!
    return 0;
}