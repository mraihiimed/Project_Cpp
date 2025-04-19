/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 17:43
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int side;

    cout << "Side size = ";
    cin >> side;

    // top side
    cout << '+';
    for(int i = 0; i < side-2; i++)
            cout << '-';
    cout << '+' << endl;


    for(int i = 0; i < side-2; i++) {

        // left side
        cout << '|';

        // interior
        for(int j = 0; j < side-2; j++)
                cout << ' ';

        // right side
        cout << '|' << endl;
    }

    // bottom side
    cout << '+';
    for(int i = 0; i < side-2; i++)
            cout << '-';
    cout << '+' << endl;

    return 0;
}

