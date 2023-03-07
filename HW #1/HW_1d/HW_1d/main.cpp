// ====================================================
// File: HW_1d.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
//	This function will search for the user's ID number		
//	and tell them where it is located in an array. If 
//	thier ID number cannot be located in the list the
//	user will be notified that it is not available.
// ====================================================

#include <iostream>
using namespace std;

int searchList(const int[], int, int);


// ====== main ========================================
//
// ====================================================
int main()
{
	const int size = 5;
	int idNumbers[size] = { 1478, 1234, 6254, 8569, 4526 };
	int num;
	int result;

	cout << "Enter the ID number that you would like to find: ";
	cin >> num;
	result = searchList(idNumbers, size, num);

	if (result == -1)
	{
		cout << "That ID number could not be found" << "\n";
	}
	else
	{
		cout << "Your ID number was located at position " << (result + 1) << "\n";
	}

	return 0;
}// end of main()
// ====================================================



// ============ searchList =============================
// This function will search for the ID number entered
// by the user.
//
// Input:
//	A value will be entered by the user that will
//	represent the ID number that needs to be found.
//
// Output:
//	The function will take the number and search for it.
//	If the function returns -1, then the number entered
//	by the user is not in the list.
// ======================================================

int searchList(const int list[], int numElems, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < numElems && !found)
	{
		if (list[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}// end of searchList()
// ====================================================


/* ==== OUTPUT =========================================
Enter the ID number that you would like to find: 6254
Your ID number was located at position 3
Press any key to continue . . .
---------------------------------------------------------
Enter the ID number that you would like to find: 5489
That ID number could not be found
Press any key to continue . . .
*/