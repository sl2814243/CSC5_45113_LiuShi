/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LiuShi
 *
 * Created on July 22, 2018, 9:00 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                      8080152 ,4562555, 5552012, 5050552, 7825877, 1250255,
                      1005231 ,6545231, 3852085, 7576651, 7881200, 4581002};
    int num;
    int i;
    
    bool found=false;
    cout << " Please enter a account number: ";
    cin >> num;
    for(i=0;i<18;i++)
        if(num==number[i])
            found=true;
    if(found)
        cout<<"The number is valid" << endl;
    else
        cout<<"The number is not valid" << endl;
    system("pause");

    return 0;
}

