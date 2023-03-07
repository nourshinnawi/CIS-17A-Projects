// Attached: HW_5a
// ====================================================
// File: HW_5a.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
//	This program will covert integer values into a 
//	binary number.
// ====================================================
#include <iostream>
using namespace std;

void decToBinary(int value);
// ====================================================
int main()
{
	int value;

	cout << "Enter a non-negative integer value: ";
	cin >> value;

	cout << "Decimal " << value << " = ";

	if (value > 0)
	{
		decToBinary(value);
	}
	else if (value < 0)
	{
		cout << "Invalid Entry";
	}
	else
	{
		decToBinary(value);
	}

	cout << " binary." << "\n";

	return 0;
}
// ====================================================
void decToBinary(int value)
{
	int binary;

	if (value == 0)
	{
		cout << "0";
		return;
	}

	decToBinary(value / 2);
	binary = value % 2;
	cout << binary;
}
/*---------------------- OUTPUT ---------------
Enter a non-negative integer value: 45
Decimal 45 = 0101101 binary.
Press any key to continue . . .
------------------------------------------------
Enter a non-negative integer value: -8
Decimal -8 = Invalid Entry binary.
Press any key to continue . . .
------------------------------------------------
Enter a non-negative integer value: 0
Decimal 0 = 0 binary.
Press any key to continue . . .
*/
