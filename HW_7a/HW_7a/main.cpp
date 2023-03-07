// Attached: HW_7a and 7b
// ====================================================
// File: HW_7a.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will output today's date and output
// a user entered pay date after adding an amount of
// days to it.
// ====================================================
#include "Date.h"

int main()
{
	Date today(11, 18, 2018);
	Date payDay;
	int numMonth;
	int numDay;
	int numYear;
	int moreDays;

	cout << "Today's date is ";
	today.displayDate();

	cout << "\n";

	cout << "Enter the month of pay day: ";
	cin >> numMonth;
	
	cout << "Enter the day of payday: ";
	cin >> numDay;
	
	cout << "Enter the year of payday: ";
	cin >> numYear;

	cout << "\n";

	cout << "Pay Day is ";
	payDay.setDate(numMonth, numDay, numYear);
	payDay.displayDate();
	cout << "\n";

	cout << "How many days would you like to add to pay day? ";
	cin >> moreDays;
	payDay.addDays(moreDays);
	cout << "\n";
	cout << "The next pay day is ";
	payDay.displayDate();

	cout << "\n";
	return 0;
}
/*----------------------- OUTPUT ----------------------
Today's date is 11/10/2018.

Enter the month of pay day: 4
Enter the day of payday: 6
Enter the year of payday: 2018

Pay Day is 4/6/2018.

How many days would you like to add to pay day? 7

The next pay day is 4/13/2018.

Press any key to continue . . .
*/