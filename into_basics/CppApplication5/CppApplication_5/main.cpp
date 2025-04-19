/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 18 avril 2025, 20:56
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   int i = 3, j, k;
 
   if(i > 0) j = 2 + i * i;
   if(i <= 0) j = 2 * i – 1;
   if(j >= 0) k = j % i + 2;
   if(j < 0) k = i % j + 2;
   if(k < 0) k = k % i % j;
   if(k >= 0) k = j % i % k; 

   cout << k << endl;




    return 0;
}

