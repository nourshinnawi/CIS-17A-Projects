// File: HW_6c.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program demonstrates how to read input from a
// user into a file.
// ====================================================
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	const int SIZE = 4;
	int num[SIZE];

	ifstream inFile;
	ofstream outFile;

	inFile.open("data.txt");
	outFile.open("results.txt", ios::app);

	if (!inFile)
	{
		cout << "Error opening file! \n";
		exit(1);
	}
	cout << "Here are the numbers in the file: \n";

	while (!inFile.eof())
	{
		inFile >> number;
		cout << number << "\n";
		outFile << number << "\n";
	}

	if (outFile.fail())
	{
		cout << "Error opening file! \n";
		return 1;
	}

	cout << "Enter three more numbers: \n";
	for (int i = 1; i < SIZE; i++)
	{
		cin >> num[i];
		outFile << num[i] << "\n";
	}
	cout << "The numbers have been written (appeneded) to results.txt \n";

	inFile.close();
	outFile.close();

	return 0;
}
/* --------------------------- OUTPUT ----------------
Here are the numbers in the file:
3
4
5
Enter three more numbers:
9
2
7
The numbers have been written (appeneded) to results.txt
Press any key to continue . . .
------------------------------------------------------*/

