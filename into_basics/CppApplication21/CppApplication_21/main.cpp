/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 20 avril 2025, 15:32
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned short int val;
    bool ispalindrome = false;
    
    cout << "value = ";
    cin >> val;
    
    unsigned short int newval = 0;
    
    for(int i=0;i<16;i++){
        int bit = val & (1<<i);
        if(bit)
            newval |= (1<< (15-i));
    }
    ispalindrome =newval == val;
    if(ispalindrome)
        cout << val << "is a bitwise palindrome " << endl;
    else
        cout << val << "is not a bitwise palindrome " << endl;
    

    return 0;
}

