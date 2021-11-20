/*
	Project 1-1

	This program converts feet to meters.

	Call this program Project_1.cpp

*/

#include<iostream>
using namespace std;

int main () {
	double f, m;	// declaring double variables

	cout << "Enter the length in feet: ";
	cin >> f;	// reads the number of feet

	m = f / 3.28;	// converts feet into meters

	cout << f << " feet is " << m << " meters.\n";

	return 0;
}
