// File: HW_6b.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program demonstrates how to write numbers from
// a file to another output file.
// ====================================================
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;

	ifstream inFile;
	ofstream outFile;

	inFile.open("data.txt");
	outFile.open("results.txt");

	if (!inFile)
	{
		cout << "Error opening file! \n";
		exit(1);
	}

	cout << "Here are the numbers in the file: \n";

	while (!inFile.eof())
	{
		inFile >> number;
		outFile << number << "\n";
		cout << number << "\n";
	}

	cout << "The data has been written to the file. \n\n";

	inFile.close();
	outFile.close();

	return 0;
}
/* --------------------------- OUTPUT ----------------
Here are the numbers in the file:
3
4
5
The data has been written to the file.

Press any key to continue . . .
------------------------------------------------------*/

