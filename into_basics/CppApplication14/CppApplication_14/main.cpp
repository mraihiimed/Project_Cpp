/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 17:40
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    
    double pow=1;
    
    cout << "n?";
    cin >> n;
    for(int i= 0; i<n;i++)
        pow /= 2.0;
    cout.precision(20);
    cout << pow << endl;
    return 0;
}

