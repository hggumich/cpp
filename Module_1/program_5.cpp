/*
	This program illustrates the differences
	between int and double.
*/

#include<iostream>
using namespace std;

int main () {
	int ivar;	// this declares an int variable
	double dvar;	// this declares a floating-point variable

	ivar = 100; 	// assign ivar the value 100
	dvar = 100.0;	// assign dvar the value 100.0

	cout << "Original value of ivar: " << ivar << "\n";
	cout << "Original value of dvar: " << dvar << "\n";
	cout << "\n";

	//divide by 3
	ivar = ivar / 3;
	dvar = dvar / 3;

	cout << "ivar after division: " << ivar << "\n";
	cout << "dvar after division: " << dvar << "\n";

	return 0;
}

