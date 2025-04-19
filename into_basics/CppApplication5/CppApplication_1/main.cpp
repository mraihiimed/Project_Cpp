/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 18 avril 2025, 21:14
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i = 3, j, k;
    if(i > 0) j = 2 + i * i;
    cout << "la valeur de j " << j << endl;
    if(i<=0) j=2*i-1;
    if(j>=0) k= j%i+2;
    cout << "la valeur de k " << k << endl;
    if(j<0) k=i%j+2;
    if(k<0) k= k%i%j;
    if(k>=0) k= j% i % k;
    cout << "la valeur de k : " << k << endl << " la valeur de j : " << j << endl << " la valeur de i : " <<  i << endl;

    return 0;
}

