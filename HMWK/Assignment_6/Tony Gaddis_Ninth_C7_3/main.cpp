/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 21, 2018, 10:24 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    
    const int typesOfSal = 5;
    const int stringSize = 7;
    char sal [typesOfSal][stringSize] = {"mild","medium","sweet","hot","zesty"};
    int numOfJarsSold [typesOfSal];
    int totalJarsOfSal = 0;
    int highest;
    int lowest;
    
    for(int count = 0; count < typesOfSal; count++) {
        cout<< "Enter the number of " <<sal[count]<<" salsa jars sold: ";
        cin>> numOfJarsSold[count];
        while (numOfJarsSold[count]<0) {
            cout<< "Please enter a positive number: ";
            cin>> numOfJarsSold[count];
        }
        
        totalJarsOfSal += numOfJarsSold[count];
    }
    
    for (int count = 0; count < typesOfSal; count++) {
        cout<< "Number of " <<sal[count]<< " salsa jars sold: "<<numOfJarsSold[count]<<endl;
    }
    cout<<"Total number of jars sold: "<<totalJarsOfSal<<endl;
    
    highest = numOfJarsSold[0];
    for (int count =0; count < typesOfSal;count++) {
        if (numOfJarsSold[count]> highest) {
            highest = numOfJarsSold[count];
        }
    }
    cout<<" The highest selling product is: "<<highest<<endl;
    lowest = numOfJarsSold[0];
    for (int count =0; count < typesOfSal;count++) {
        if (numOfJarsSold[count] <lowest) {
            lowest = numOfJarsSold[count];
            
        }
        
    }
    cout<<" The lowest selling product is: "<<lowest<<endl;
    system("pause");
}