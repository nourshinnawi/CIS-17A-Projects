// File: HW_10c.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will take the employee hours and wages
// store them into vectors, and then display each
// employee's gross pay.
// ====================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;
	vector<int>hours(NUM_EMPLOYEES);
	vector<double>wage(NUM_EMPLOYEES);


	cout << "Enter hours worked and hourly wage of each employee: \n\n";
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << "Hours for Employee #" << i + 1 << ": ";
		cin >> hours[i];
		hours.push_back(hours[i]);

		cout << "Wages for Employee #" << i + 1 << ": ";
		cin >> wage[i];
		wage.push_back(wage[i]);
	}
	system("CLS");

	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay for each employee:\n\n";
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << setw(11) << "Employee #" << i + 1 << ": " << setw(5) 
			<< "$" << setw(7) << hours[i] * wage[i] << "\n";
	}
	cout << "\n" << "Employee #1 hours = " << hours.front() << "\n"
		 << "Employee #5 hours = " << hours.back() << "\n";

	return 0;
}
/*---------------------- OUTPUT -------------------------
Enter hours worked and hourly wage of each employee:

Hours for Employee #1: 30
Wages for Employee #1: 13.50
Hours for Employee #2: 25
Wages for Employee #2: 18
Hours for Employee #3: 28
Wages for Employee #3: 11
Hours for Employee #4: 36
Wages for Employee #4: 17.50
Hours for Employee #5: 23
Wages for Employee #5: 16.30

------------- SCREEN CLEARS ------------------

Gross pay for each employee:

Employee #1:     $ 405.00
Employee #2:     $ 450.00
Employee #3:     $ 308.00
Employee #4:     $ 630.00
Employee #5:     $ 374.90

Employee #1 hours = 30
Employee #5 hours = 23
Press any key to continue . . .
*/