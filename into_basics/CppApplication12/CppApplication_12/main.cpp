/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 17:28
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double pi4 = 0.;
    
    long n;
    
    double div = 1;
    
    cout << "Number of iterations? ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        if(i % 2 == 1)
            pi4 -= (1./div);
        else
            pi4 += (1./div);
        
        div+=2;
    }
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}

