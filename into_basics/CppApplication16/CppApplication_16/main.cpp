/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 17:44
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int N = 3, h;
    cout << "Pyramid height = ";
    cin >> h;
    int spa = 15;		// starting empty space width
    int beg = 1;		// additional empty space width
    int ins = 1;		// inside space width
    // tops of pyramids
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < spa; j++)
                cout << ' ';
        cout << '*';
    }
    cout << endl;
    spa -= 2;
    // side walls of pyramids
    for(int k = 1; k < h - 1; k++) {
        for(int i = 0; i < beg; i++)
                cout << ' ';
        for(int i = 0; i < N; i++) {
                for(int j = 0; j < spa; j++)
                        cout << ' ';
                cout << '*';
                for(int l = 0; l < ins; l++)
                        cout << ' ';
                cout << '*';
        }
        ins += 2;
        spa -= 2;
        beg += 1;
        cout << endl;
    }
    // bases of pyramids
    for(int i = 0; i < beg; i++)
            cout << ' ';
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < spa; j++)
                cout << ' ';
        for(int l = 0; l < ins+2; l++)
                cout << '*';
    }
    cout << endl;
    return 0;
}

