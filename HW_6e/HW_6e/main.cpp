// File: HW_6e.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will take information about cats from
// the user and write them to a binary file. Then it
// will take one more input and append it to the file.
// ====================================================
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct Cat
{
	char name[30];
	int age;
};

int main()
{
	Cat cat;
	fstream file;

	cout << "Enter 3 cat records.\n";

	file.open("critters.bin", ios::out | ios::binary | ios::app);

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
	cout << "Record written to file.\n\n";

	cout << "Enter one more cat \n";
	cout << "NAME: ";
	cin.getline(cat.name, 30);
	cout << "AGE: ";
	cin >> cat.age;
	cin.ignore();

	file.write(reinterpret_cast<char *>(&cat), sizeof(cat));

	file.close();

	file.open("critters.bin", ios::in | ios::binary | ios::app);

	cout << "\n";
	cout << "Here is a list of all cats: \n";
	file.read(reinterpret_cast<char *>(&cat), sizeof(cat));

	while (!file.eof())
	{
		cout << fixed << showpoint << setprecision(2);
		cout << cat.name << setw(10) << left << cat.age;
		cout << "\n";
		file.read(reinterpret_cast<char *>(&cat), sizeof(cat));
	}

	file.close();
	return 0;
}
/* ----------------------------- OUTPUT --------------------
Enter 3 cat records.
Enter information about a cat:
NAME: Tom
AGE: 5
Enter information about a cat:
NAME: Fluffy
AGE: 3
Enter information about a cat:
NAME: Sweet Pea
AGE: 2
Record written to file.

Enter one more cat
NAME: Jasmin
AGE: 4

Here is a list of all cats:
Tom		  5
Fluffy	  3
Sweet Pea 2
Jasmin    4
Press any key to continue . . .
------------------------------------------------------------ */