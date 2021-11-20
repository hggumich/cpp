// Using an operator.

#include<iostream>
using namespace std;

int main()
{
	int length, width, area; // all declared using one statement

	length = 7; //this assign 7 to length
	width = 5; //this assign 5 to width

	area = length * width; // this commutes area

	cout << "The area is ";
	cout << area;
	cout << "\n";

	return 0;
}
