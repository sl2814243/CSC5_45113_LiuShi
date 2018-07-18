/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on March 13th, 2018, 10:00AM
 * Purpose:  All sorts of sums
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    short sumPos,sumNeg,sumTot,x;
    
    //Initialize the sums
    sumPos=sumNeg=sumTot=0;
    
    //Process/Map inputs to outputs
    cout<<"This program sums 10 negative or positive integers"<<endl;
    cout<<"Utilize numbers between -100,100"<<endl;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    cout<<"Input an integer ->  ";
    cin>>x;
    switch(x>0){
        case true:sumPos+=x;break;
        default:  sumNeg+=x;
    }
    sumTot+=x;
    
    //Output data
    cout<<"The positive sum = "<<sumPos<<endl;
    cout<<"The negative sum = "<<sumNeg<<endl;
    cout<<"The total    sum = "<<sumTot<<endl;
    
    
    //Exit stage right!
    return 0;
}