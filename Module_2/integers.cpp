#include <iostream>
/* 	This program shows the difference between
	signed and unsigned integers.
*/

int main() {
	short int i;			// a signed short integers
	short unsigned int j;	// an unsigned short integer
	
	j = 60000;
	i = j;
	cout << i << " " << j;
	
	return 0;
}