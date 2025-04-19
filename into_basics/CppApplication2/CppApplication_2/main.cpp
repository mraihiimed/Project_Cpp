/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 18 avril 2025, 19:00
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float value, squareroot;
    
    cout << "Give me a number and I will find its square root: " << endl;
    cin >> value;
    if(value >=0.0){
        squareroot = sqrtf(value);
        cout << "You have given: " << value << endl;
        cout << "The square root is :" << squareroot << endl;
    }
    return 0;
}

