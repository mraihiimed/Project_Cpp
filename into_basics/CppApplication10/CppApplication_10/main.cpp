/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 12:39
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int yr,mn,da;
    
    cout << "year = ";
    cin >> yr;
    
    int a = yr % 19;
    
    
    int b = yr % 4;
    
    
    int c = yr % 7;
    
    int d = (a * 19 +24) % 30;
    
    int e = (2 * b +4 * c + 6* d +5) % 7;
    
    if(d + e < 10)
        cout << " March " << d + e +  22 << endl;
    else
        cout << " April " << d + e - 9 << endl;
    return 0;
}

