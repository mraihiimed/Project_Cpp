/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 20 avril 2025, 15:28
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned long val;
    
    int cnt = 0;
    cout << "value = ";
    cin >> val;
    
    
    while(val != 0){
        if((val & 1) == 1)
            cnt++;
        val >>=1;
    
    }
    cout << cnt << endl;
    return 0;
}

