// Attached: HW_6a, 6b, 6c, 6d, 6e
// ====================================================
// File: HW_6a.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program demonstrates how to ouput numbers from
// a file and to check if the file is opened successfully
// ====================================================
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	ifstream inFile;

	inFile.open("data.txt");

	if (!inFile)
	{
		cout << "Error opening file! ";
		exit(1);
	}

	cout << "Here are the numbers in the file: \n";

	while (!inFile.eof())
	{
		inFile >> number;
		cout << number << "\n";
	}

	inFile.close();

	return 0;
}
/* --------------------------- OUTPUT ----------------
Here are the numbers in the file:
3
4
5
Press any key to continue . . .
------------------------------------------------------*/
