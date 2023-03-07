// File: HW_6d.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will take information about cats from
// the user and write them to a binary file.
// ====================================================
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Cat
{
	char name[30];
	int age;
};

int main()
{
	Cat cat;

	cout << "Enter 3 cat records.\n";

	fstream file ("critters.bin", ios::out | ios::binary);

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter information about a cat: \n";
		cout << "NAME: ";
		cin.getline(cat.name, 30);
		cout << "AGE: ";
		cin >> cat.age;
		cin.ignore();

		file.write(reinterpret_cast<char *>(&cat), sizeof(cat));
	}

	cout << "Record written to file.\n";

	file.close();
	return 0;
}
/* ----------------------------- OUTPUT --------------------
Enter 3 cat records.
Enter information about a cat:
NAME: Tom
AGE: 7
Enter information about a cat:
NAME: Fluffy
AGE: 3
Enter information about a cat:
NAME: Sweet Pea
AGE: 4
Record written to file.
Press any key to continue . . .
------------------------------------------------------------ */