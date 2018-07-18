/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on June 16th, 2018, 1:20 PM
 * Purpose: Sequence for e^x = x^0/0! + x^1/1!
 *        + x^2/2! + x^3/3! + ...
 */

//System Libraries
#include <iostream>
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aproxE,term,x;
    int counter,nTerms=10;
    
    //Initialize Variables
    aproxE=1.0f;
    counter=1;
    x=0.5f;
    term=x/counter++;
    
    //Process/Map inputs to outputs
    for(int cnt=2;cnt<=nTerms;cnt++){
        aproxE+=term;
        term*=x/cnt;
    }

    //Output data
    cout<<"Number of Terms for Appoximation = "<<nTerms<<endl;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
    
    //Exit stage right!
    return 0;
}