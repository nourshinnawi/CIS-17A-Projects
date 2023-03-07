// Attached: HW_10a, 10b, 10c
// ====================================================
// File: HW_10a.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program uses the "max" template function. It
// returns the greater of two values.
// ====================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cout << "The greater value of 1 and 2 = " << max(1, 2) << "\n"
		<< "The greater value of 2 and 1 = " << max(2, 1) << "\n"
		<< "The greater value of 'a' and 'z' = " << max('a', 'z') << "\n"
		<< "The greater value of 3.14 and 2.72 = " << max(3.14, 2.72) << "\n";

	return 0;
}
/*--------------------- OUTPUT ---------------------
The greater value of 1 and 2 = 2
The greater value of 2 and 1 = 2
The greater value of 'a' and 'z' = z
The greater value of 3.14 and 2.72 = 3.14
Press any key to continue . . .
*/