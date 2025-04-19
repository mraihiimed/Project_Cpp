/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 18 avril 2025, 18:12
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int square_side = 12;
    //cout << "The square perimeter is: " << 4 * square_side << endl;
    int byte = 255;
    //cout << "Byte in hex: " << hex << byte << endl;
    

    //cout << hex << byte<< endl;
    //cout << byte << dec << byte<< endl;
    //cout << oct << byte;
    
    char Char = 'X';
    char Minus = '-';
    float Float = 2.5;
    int Int = Char;
    int max_sheep;
    //cin >> max_sheep;
    //cout<< " maximum sheep is : "<<max_sheep<<endl;
    //cout << Char << " " << (int)Char << " " << Int << " " << (char)Int;

    //cout << Char << " " << (int)Char << " " << Int << " " << (char)Int;
    //cout << Char << Minus << Float;
   
    //cout << setbase(16) << byte;
    
    int value, square;

    cout << "Give me a number and I will square it!\n";
    cin >> value;
    square = value * value;
    cout << "You've given " << value << endl;
    cout << "The squared value is " << square << endl;
    return 0;
}

