// Attached: HW_8a, 8b
// ====================================================
// File: HW_8a.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will output student records. 
// ====================================================

#include "Student.h"

int main()
{
	Student s1;
	Student s2(100, "Tom P. Lee", 12);

	cout << "Here is student #1: \n";
	s1.displayRecord();

	cout << "Here is student #2: \n";
	s2.displayRecord();

	s1.setId(101);
	s1.setName("John Lee Hooker");
	s1.setUnits(15);

	cout << "Here is student #2 after the set functions: \n";
	s1.displayRecord();

	return 0;
}
/*--------------- OUTPUT --------------------
Here is student #1:
   ID: 0
   Name:
   Units: 0

Here is student #2:
   ID: 100
   Name: Tom P. Lee
   Units: 12

Here is student #2 after the set functions:
   ID: 101
   Name: John Lee Hooker
   Units: 15

Press any key to continue . . .
*/