/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 09:51
 */

    //if the year number isn't divisible by 4, it is a common year;
    //otherwise, if the year number isn't divisible by 100, it is a leap year;
    //otherwise, if the year number isn't divisible by 400, it is a common year;
    //otherwise, it is a leap year.

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int Year[]={2000,2015,1999,1996,1900};
    for(int i=0;i<5;i++){
        if(Year[i] < 1582)
        {
            cout << "Warning the date is out of range" << endl;
        }
        else if(  ( (Year[i] % 4) == 0) && ((Year[i] % 100) != 0) ||  ((Year[i] % 400) == 0))
        {
            cout << "Leap year" << endl;
        }
        else
        {
            cout << "Common year" << endl;
        }
        
    }

    return 0;
}

