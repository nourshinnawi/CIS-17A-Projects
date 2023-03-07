// File: HW_10b.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program demonstrates how to add, erase, delete,
// and display vector values.
// ====================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	vector<int>values;

	values.push_back(1);
	values.push_back(2);
	values.push_back(4);
	values.push_back(9);
	values.push_back(5);

	cout << fixed << showpoint << setprecision(2);

	cout << "Vector: ";

	for (int i = 0; i < values.size(); i++)
	{
		cout << values[i] << setw(4);
	}

	cout << "\n\n";

	values.insert(values.begin(), 3);

	cout << "Vector: ";

	for (int i = 0; i < values.size(); i++)
	{
		cout << values[i] << setw(4);
	}

	cout << "\n\n";

	values.erase(values.begin(), values.begin()+1);

	cout << "Vector: ";

	for (int i = 0; i < values.size(); i++)
	{
		cout << values[i] << setw(4);
	}

	cout << "\n\n";

	values.pop_back();

	cout << "Vector: ";

	for (int i = 0; i < values.size(); i++)
	{
		cout << values[i] << setw(4);
	}

	cout << "\n\n";

	cout << "There are " << values.size() << " values.\n\n";

	return 0;
}
/* ----------------------- OUTPUT -----------------------
Vector: 1   2   4   9   5

Vector: 3   1   2   4   9   5

Vector: 1   2   4   9   5

Vector: 1   2   4   9

There are 4 values.

Press any key to continue . . .
*/
