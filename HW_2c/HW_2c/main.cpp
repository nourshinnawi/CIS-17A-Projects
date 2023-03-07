// File: HW_2c
// ----------------------------
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
// ----------------------------

#include <string>
#include <iostream>
#include "grades.h"
#include <iomanip>
using namespace std;

void getGrades(Grades *grades);
int calcGPA(Grades *grades);
void displayResult(const Grades *grades);


int main()
{
	Grades *grades = nullptr;
	int gpa;

	getGrades(grades);
	gpa = calcGPA(grades);
	displayResult(grades);
	
	return 0;
}

void getGrades(Grades *grades)
{
	Grades *temp = new Grades;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Student #" << i + 1 << "'s grades:" << "\n";
		cout << "English: ";
		cin >> temp->english;
		cout << "History: ";
		cin >> temp->history;
		cout << "Math: ";
		cin >> temp->math;
	}
}

int calcGPA(Grades *grades)
{
	Grades *temp = new Grades;

	int A = 4;
	int B = 3;
	int C = 2;
	int D = 1;
	int F = 0;

	temp->studentGpa = ((temp->english + temp->history + temp->math) / 3);
	temp->englishGpa = (temp->english) / 5;
	temp->historyGpa = (temp->history) / 5;
	temp->mathGpa = (temp->math) / 5;

	return temp->studentGpa;
	return temp->englishGpa;
	return temp->historyGpa;
	return temp->mathGpa;
}

void displayResult(const Grades *grades)
{
	Grades *temp = new Grades;

	cout << fixed << showpoint << setprecision(2);
	
	cout << "All Grades \n";
	cout << "Student" << setw(10) << "English" << setw(10) << "History" << setw(10) << "Math" << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "#" << i + 1 << setw(10) << temp->english << setw(10) << temp->history << setw(10) << temp->math;
	}

	cout << "\n";
	cout << "Student GPAs\n";
	cout << "Student\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "#" << i + 1 << setw(10) << temp->studentGpa;
	}

	cout << "\n";
	cout << "Average GPA by Subject\n";
	cout << "English" << setw(10) << "History" << setw(10) << "Math" << "\n";
	cout << temp->englishGpa << setw(10) << temp->historyGpa << setw(10) << temp->mathGpa;

}

/* --------------- OUTPUT -------------------
Enter Student #1's grades:
English: A
History: A
Math: B
Enter Student #2's grades:
English: C
History: C
Math: F
Enter Student #3's grades:
English: C
History: D
Math: B
Enter Student #4's grades:
English: B
History: A
Math: C
Enter Student #5's grades:
English: B
History: A
Math: B
All Grades
Student   English   History      Math
#1         ═         ═         ═#2         ═         ═         ═#3         ═         ═         ═#4         ═         ═         ═#5         ═         ═         ═
Student GPAs
Student
#1-431602080.00#2-431602080.00#3-431602080.00#4-431602080.00#5-431602080.00
Average GPA by Subject
English   History      Math
-431602080.00-431602080.00-431602080.00Press any key to continue . . .
*/

