/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 18 avril 2025, 19:08
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    float v1=2.3;
    float v2=2.3;
    float v3=2.123456;
    float v4=2.123456;
    float v5=2.123456;
    
    std::cout << std::setprecision(2) << v1 << std::endl;
    std::cout << std::setprecision(2) << std::fixed << v2 << std::endl;
    std::cout << std::setprecision(6) << v3 << std::endl;
    std::cout << std::setprecision(2) << v4 << std::endl;
    std::cout << std::setprecision(0) << v5 << std::endl;
    return 0;
    

}

