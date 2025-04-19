/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 17:25
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int c0, i=0;
    
    cout << "c0 = ";
    cin >> c0;
    while(c0 != 1)
    {
        i++;
        
        if(c0 % 2 == 0)
            c0=c0/2;
        else
            c0 = 3*c0+1;
        cout << c0 << endl;
    }
    cout << "steps = " << i << endl;
    return 0;
}

