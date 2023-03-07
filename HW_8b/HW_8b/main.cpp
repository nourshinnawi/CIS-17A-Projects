// File: HW_8b.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will output student records. 
// ====================================================

#include "Student.h"
#include "UnderGrad.h"
#include "Grad.h"

int main()
{
	UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");
	Grad grad(101, "Jim Jones", 12, "PHD");

	cout << "Here is the undergraduate student: \n";
	underGrad.displayRecord();

	cout << "Here is the grad student: \n";
	grad.displayRecord();

	grad.setUnits(15);

	cout << "Here is the grad student after the set functions: \n";
	grad.displayRecord();


	return 0;
}
/*------------ OUTPUT -----------------
Here is the undergraduate student:
   ID: 100
   Name: Tom Lee
   Units: 9
   Class: Freshman

Here is the grad student:
   ID: 101
   Name: Jim Jones
   Units: 12
   Degree: PHD

Here is the grad student after the set functions:
   ID: 101
   Name: Jim Jones
   Units: 15
   Degree: PHD

Press any key to continue . . .
*/