/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 18 avril 2025, 19:31
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int ipPart1, ipPart2, ipPart3, ipPart4;
    string ipNumber;
    
    cout << "Input 1st part of IP address:" ;
    cin >> ipPart1;
    cout << "Input 2nd part of IP address:";
    cin >>ipPart2;
    cout << "Input 3rd part of IP address:";
    cin >>ipPart3;
    cout << "Input 4th part of IP address:";
    cin >>ipPart4;
    cout << ipPart1 <<"." << ipPart2 <<"."<< ipPart3 <<"." << ipPart4;
    return 0;
}

