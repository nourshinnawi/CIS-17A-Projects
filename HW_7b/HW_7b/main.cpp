// File: HW_7b.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will output the times on clocks, compare
// them to see if they are equal, and output the result.
// This program will also increment the hours, minutes,
// and seconds by one and ouput the result.
// ====================================================

#include "ClockType.h"

int main()
{
	ClockType myClock;
	ClockType yourClock;
	ClockType myOtherClock(0, 0, 0);

	myClock.setTime(3, 30, 0);
	yourClock.setTime(10, 0, 15);

	cout << "The time on my clock is: ";
	myClock.printTime();

	cout << "The time on your clock is: ";
	yourClock.printTime();

	if (myClock == yourClock)
	{
		cout << "The times of my clock and your clock"
			<< " are equal. \n\n";
	}
	else
	{
		cout << "The times of my clock and your clock"
			<< " are not equal. \n\n";
	}

	cout << "The time on my other clock is: ";
	myOtherClock.printTime();

	cout << "I am going to add 1 minute and 1 second"
		<< " to my other clock. \n\n";

	myOtherClock.incrementMinutes();
	myOtherClock.incrementSeconds();

	cout << "The time on my other clock is: ";
	myOtherClock.printTime();

	return 0;
}
/* ---------------- OUTPUT --------------------
The time on my clock is: 03:30:00.

The time on your clock is: 10:00:15.

The times of my clock and your clock are not equal.

The time on my other clock is: 00:00:00.

I am going to add 1 minute and 1 second to my other clock.

The time on my other clock is: 00:01:01.

Press any key to continue . . .

*/