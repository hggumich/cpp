/*
	Project 1-2

	This program displays a conversion table of feet to meters.

*/

#include<iostream>
using namespace std;

int main() {
	double f; 	// holds the length in feet
	double m; 	// holds the conversion in meters
	int counter;

	counter = 0; 	// inital set to zero

	for(f = 1.0; f <= 100.0; f++) {
		m = f / 3.28;	// convert to meters
		cout << f << " feet is  " << m << "\n";

		counter ++; 	// line counter

		// every 10th line, print a blank line
		if(counter == 10) {
			cout << "\n"; 	// output a blank line
			counter = 0; 	// reset counter to zero
		}
	}

	return 0;
}
