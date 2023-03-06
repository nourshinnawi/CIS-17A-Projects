// Attached: HW_2a, 2b, and 2c
// ===============================
// File: HW_2a
// ===============================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
// ===============================
#include <iostream>
using namespace std;
// ===============================
int getScores(double []);
void showMenu();
char getChoice();
void displayResult(char choice, double [], int average);
// ===============================
int main()
{
	const int SIZE = 5;
	double testScores[SIZE];
	char choice;
	int average;

	average = getScores(testScores);
	system("CLS");
	showMenu();
	choice = getChoice();
	system("CLS");
	displayResult(choice, testScores, average);

	return 0;
}
// ===============================
int getScores(double testScores[])
{
	int average;
	float sum = 0.0;
	cout << "Enter 5 test scores: " << "\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> testScores[i];
		sum += testScores[i];
	}
	average = sum / 5;
	return average;
}
// ===============================
void showMenu()
{
	cout << "A.) Calculate the average of the test scores." << "\n";
	cout << "B.) Display all test scores. " << "\n";
	cout << "\n";
}
// ===============================
char getChoice()
{
	char choice;
	
	cout << "Enter your choice: ";
	cin >> choice;

	return choice;
}
// ===============================
void displayResult(char choice, double testScores[], int average)
{
	if (choice == 'A' || choice == 'a')
	{
		cout << "The average is: " << average << "\n";
		cout << "\n";
	}
	if (choice == 'B' || choice == 'b')
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Test Score #" << i + 1 << ": " << testScores[i] << "\n";
		}
		cout << "\n";
	}
	if (choice == 'C' || choice == 'c')
	{
		cout << "Invalid Entry!" << "\n";
		cout << "\n";
	}
}

/* ------ OUTPUT ------------------------
Enter 5 test scores:
75
96
77
86
65

------ screen clears ---------------------

A.) Calculate the average of the test scores.
B.) Display all test scores.

Enter your choice: a

------ screen clears ---------------------

The average is: 79

Press any key to continue . . .
--------------------------------------------
Enter 5 test scores:
75
96
77
86
65

------ screen clears ---------------------

A.) Calculate the average of the test scores.
B.) Display all test scores.

Enter your choice: b

------ screen clears ---------------------

Test Score #1: 75
Test Score #2: 96
Test Score #3: 77
Test Score #4: 86
Test Score #5: 65

Press any key to continue . . .
-------------------------------------------
Enter 5 test scores:
75
96
77
86
65

------ screen clears ---------------------

A.) Calculate the average of the test scores.
B.) Display all test scores.

Enter your choice: c

------ screen clears ---------------------

Invalid Entry!

Press any key to continue . . .
*/