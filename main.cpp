// =============================
// File: HW_2b
// =============================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
// =============================
#include <iostream>
using namespace std;

void getData(int [][4], const int ROWS, const int COLS);
void displayArray(int [][4], const int ROWS, const int COLS);
// =============================
int main()
{
	const int ROWS = 3;
	const int COLS = 4;
	int numArray[ROWS][COLS];

	getData(numArray, ROWS, COLS);
	system("CLS");
	displayArray(numArray, ROWS, COLS);

	return 0;
}
// ======================================
void getData(int numArray[][4], const int ROWS, const int COLS)
{
	cout << "Enter integers into the 2-Dimensional array: " << "\n";
	cout << "\n";

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "Enter a number: ";
			cin >> numArray[i][j];
		}
	}
}
// =======================================
void displayArray(int numArray[][4], const int ROWS, const int COLS)
{
	cout << "Here is the data in the 2-Dimensional array: " << "\n";
	cout << "\n";

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "	" << numArray[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
}
// ======================================

/* ------------ OUTPUT ------------------
Enter integers into the 2-Dimensional array:

Enter a number: 56
Enter a number: 85
Enter a number: 74
Enter a number: 36
Enter a number: 22
Enter a number: 14
Enter a number: 44
Enter a number: 33
Enter a number: 10
Enter a number: 99
Enter a number: 47
Enter a number: 51

--------- screen clears ---------------

Here is the data in the 2-Dimensional array:

56      85      74      36
22      14      44      33
10      99      47      51

Press any key to continue . . . */
