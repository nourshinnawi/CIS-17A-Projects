// ====================================================
// File: HW_1c.cpp
// ====================================================
//
// Description: 
//	This program will take three temperatures 
//	inputed by the user and find the average. Then
//	it will display the average temperature for the
//	cities.
// ====================================================

#include <iostream>
using namespace std;

void getTemps(int temp[]);
void displayAvg(int temp[]);

// ====== main ========================================
//
// ====================================================
int main()
{
	const int NUM_CITIES = 3;
	int temp[NUM_CITIES];
	int avg;

	getTemps(temp);
	displayAvg(temp);

	return 0;
}// end of main()
// ====================================================



// ========= getTemps =================================
// This function will ask the user for the temperatures
// of three cities and assign the values to variables.
//
// Input:
//		The user will input three values into the function.
//
// Output:
//		The values will be stored in an array that will
//		be passed to other functions.
// ====================================================

void getTemps(int temp[])
{
	cout << "Enter the temperatures of 3 cities." << "\n";
	cout << "#1: ";
	cin >> temp[0];
	cout << "#2: ";
	cin >> temp[1];
	cout << "#3: ";
	cin >> temp[2];
}// end of getTemps()
// ====================================================



// ========= displayAvg ===============================
// This function will display the average temperature.
//
// Input: 
//		An array with the stored values will passed 
//		through the function and used to calculate 
//		the average temperature.
//
// Output:
//		The function will display the temperature from 
//		the three cities in a simple format.
// ====================================================

void displayAvg(int temp[])
{
	cout << "\n";
	cout << "The average temperature is " << (temp[0] + temp[1] + temp[2]) / 3 << " degrees" << ".\n";
	cout << "\n";
}	// end of displayAvg()
// ====================================================


/* ==== OUTPUT ==============================================
Enter the temperatures of 3 cities.
#1: 75
#2: 95
#3: 68.2

The average temperature is 79 degrees.

Press any key to continue . . .
*/
