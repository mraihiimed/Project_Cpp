/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 17:48
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int n;

cout << "n = ";
cin >> n;

// Handle base cases (0! and 1!)
if(n == 0 || n == 1) {
    cout << "1" << endl;
} else {
    // Initialize result to 1
    long long result = 1;

    // Multiply all numbers from 2 to n
    for(int i = 2; i <= n; i++) {
        result *= i;
    }

    cout << result << endl;
}
    return 0;
}

