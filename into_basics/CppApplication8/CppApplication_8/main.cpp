/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Geek
 *
 * Created on 19 avril 2025, 12:18
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
	int   sys; 		// measurement system
	float m, ft, in;	// metres, feet and inches
	int   ift;		// feet but as integer
	
	cout << "What is your measurement system? 0-metric/1-imperial: ";
	cin >> sys;

	// metric?
	if(sys == 0) {
		cout << "m = ";
		cin >> m;

		// inches first
		in = m / 0.0254;
		// we need integral number of feet
		ift = in / 12;
		// remainder is a real number of inches
		in = in - (ift * 12);
		cout << ift << "'" << in << "\"" << endl;

	// imperial?
	} else if(sys == 1) {
		cout << "ft = ";
		cin >> ft;
		cout << "in = ";
		cin >> in;

		// cumulate inches and feet as inches
		in += 12 * ft;

		// convert inches into meters
		m = in * 0.0254;

		cout << m << "m" << endl;
	}
	return 0;
    return 0;
}

