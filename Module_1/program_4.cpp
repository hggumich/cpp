/*
	An interactive program that computes
	the area of a rectangle.
*/

#include<iostream>
using namespace std;

int main()
{
	int length, width; // declaring variables

	cout << "Enter the length: ";
	cin >> length;

	cout << "Enter the width: ";
	cin >> width;

	cout << "The area is: " << length * width << "\n";

	return 0;
}
