// Attached: HW_9a, 9b
// ====================================================
// File: HW_9a.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will output information about dogs and
// check to see if they are the same.
// ====================================================

#include "Dog.h"

int main()
{
	Dog myDog("Spot", 5.5, 3);
	Dog yourDog("Jack", 4.5, 3);
	float total;

	total = myDog + yourDog;
	cout << "Total Weight: " << total << "\n";

	if (myDog >= 2)
	{
		cout << "The dog is at least 2 years old.\n\n";
	}
	else
	{
		cout << "The dog is less than 2 years old.\n\n";
	}

	if (yourDog < myDog)
	{
		cout << "Your dog weighs less than my dog.\n\n";
	}
	else
	{
		cout << "Your dog does not weigh less than my dog.\n\n";
	}

	if (myDog == yourDog)
	{
		cout << "They have the same name.\n\n";
	}
	else
	{
		cout << "They do not have the same name.\n\n";
	}

	myDog.displayDog();
	cout << yourDog;

	return 0;
}
/*------------------ OUTPUT -----------------------
The dog is at least 2 years old.

Your dog weighs less than my dog.

They do not have the same name.

NAME: Spot
WEIGHT: 5.5
AGE: 3

NAME: Jack
WEIGHT: 4.5
AGE: 3

Press any key to continue . . .
*/