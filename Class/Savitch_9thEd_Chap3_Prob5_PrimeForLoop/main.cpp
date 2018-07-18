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
#include <cmath>
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
    int nLoops=1000;
    bool prime;//Determine if num2Tst is prime
  
    
    //Process/Map inputs to outputs
    for(int num2Tst=2;num2Tst<=nLoops;num2Tst++){
        prime=true;
        for(int i=2;i<=sqrt(nLoops)&&prime;i++){
            prime=num2Tst==i?true&&prime:prime&&num2Tst%i;
        }
                  //Output data
        if(prime)cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    }
    
    //Exit stage right!
    return 0;
}