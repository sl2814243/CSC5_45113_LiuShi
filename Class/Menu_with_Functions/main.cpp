/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on April 17th, 2018, 10:20 AM
 * Purpose:  Menu using Functions and Examples
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;   
    cout<<"Type 4 for Switch-Case example"<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    cout<<"Independent-If Example"<<endl;
    //Declare variables
    float hrsWrkd,payRate,payChk;
    //Initialize Variables
    cout<<"This program calculates your payCheck"<<endl;
    cout<<"Input the hours you worked for the week "<<endl;
    cout<<"and your Pay Rate $'s/hr"<<endl;
    cin>>hrsWrkd>>payRate;
    //Calculate your pay check
    payChk=hrsWrkd*payRate;
    //If you worked overtime > 40 hours
    if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
    //Output all conditions
    cout<<"Hours Worked = "<<hrsWrkd<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Pay Check = $"<<payChk<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
    cout<<"Dependent-If Example"<<endl;
    //Declare variables
    float hrsWrkd,payRate,payChk;
    //Initialize Variables
    cout<<"This program calculates your payCheck"<<endl;
    cout<<"Input the hours you worked for the week "<<endl;
    cout<<"and your Pay Rate $'s/hr"<<endl;
    cin>>hrsWrkd>>payRate;
    //Calculate your pay check
    if(hrsWrkd>=0&&hrsWrkd<=40){
        payChk=hrsWrkd*payRate;
    }else{
        payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
    }
    //Output all conditions
    cout<<"Hours Worked = "<<hrsWrkd<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Pay Check = $"<<payChk<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    cout<<"Ternary Op Example"<<endl;
    //Declare variables
    float hrsWrkd,payRate,payChk;
    //Initialize Variables
    cout<<"This program calculates your payCheck"<<endl;
    cout<<"Input the hours you worked for the week "<<endl;
    cout<<"and your Pay Rate $'s/hr"<<endl;
    cin>>hrsWrkd>>payRate;
    //Calculate your pay check
    payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
            hrsWrkd*payRate:
            hrsWrkd*payRate+(hrsWrkd-40)*payRate;
    //Output all conditions
    cout<<"Hours Worked = "<<hrsWrkd<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Pay Check = $"<<payChk<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    cout<<"Switch-Case Example"<<endl;
    //Declare variables
    float hrsWrkd,payRate,payChk;
    //Initialize Variables
    cout<<"This program calculates your payCheck"<<endl;
    cout<<"Input the hours you worked for the week "<<endl;
    cout<<"and your Pay Rate $'s/hr"<<endl;
    cin>>hrsWrkd>>payRate;
    //Calculate your pay check
    switch(hrsWrkd>=0&&hrsWrkd<=40){
        case true:{
            payChk=hrsWrkd*payRate;
            break;
        }
        default:{
            payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
        }
    }
    //Output all conditions
    cout<<"Hours Worked = "<<hrsWrkd<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Pay Check = $"<<payChk<<endl;
}