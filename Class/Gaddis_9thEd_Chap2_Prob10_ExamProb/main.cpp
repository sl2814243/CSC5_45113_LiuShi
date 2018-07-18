/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 29th, 2018, 11:20 AM
 * Purpose:  Paycheck
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd,//Hours worked in hours
          payRate,//Pay rate in $'s/hour
          payChk;//Pay check in $'S

    //Initial Variables
    payRate=10;//$10/hr
    hrsWrkd=40;//40 hours
    
    //Map/Process Inputs to Outputs
    payChk=payRate*hrsWrkd;
    
    //Output the results
    std::cout<<"Pay check = $"<<payChk<<std::endl;

    //Exit program!
    return 0;
}