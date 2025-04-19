/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 12:27
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int yr, mn, da; //year, month,day
    
    cout << "year = ";
    cin >> yr;
    cout << "month = ";
    cin >> mn;
    cout << "day = ";
    cin >> da;
    
   /* Decrease month number by 2;
    if month number becomes less than 0, increment it by 12 and decrement year by 1;
    take month number and multiply it by 83 and divide it by 32;
    add day number to month;
    add year number to month;
    add year/4 to month;
    subtract year/100 from month;
    add year/400 to month;
    find the remainder of dividing month by 7;
    Congrats! A weekday number is ready for you! 0 – Sunday, 1 – Monday, ... and so on.*/
    mn-=2;
    if(mn<=0)
    {
        mn+=12;
        yr--;
    }
    mn=mn*83/32;
    
    mn+=da;
    
    mn+=yr;
    
    mn+=yr/4;
    
    mn-=yr/100;
    
    mn+=yr/400;
    
    cout << mn%7 << endl;
    
    return 0;
}

