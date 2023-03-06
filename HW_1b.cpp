// ====================================================
// File: HW_1b.cpp
// ====================================================
//
// Description: 
//		This program will take three temperatures 
//		inputed by the user and find the average. Then
//		it will display the average temperature for the
//		cities.
// ====================================================

#include <iostream>
using namespace std;

void getTemps(int & temp1, int & temp2, int & temp3);
int calcAvg(int temp1, int temp2, int temp3);
void displayAvg(int avg);

// ====== main ========================================
//
// ====================================================
int main()
{
	int temp1, temp2, temp3, avg;

	getTemps(temp1, temp2, temp3);
	avg = calcAvg(temp1, temp2, temp3);
	displayAvg(avg);

	return 0;
}	// end of main()
// ====================================================



// ========= getTemps =================================
// This function will ask the user for the temperatures
// of three cities and assign the values to variables.
//
// Input:
//		The user will input three values into the function.
//
// Output:
//		The values will be assigned variables that will
//		be passed to other functions.
// ====================================================

void getTemps(int & temp1, int & temp2, int & temp3)
{
	cout << "Enter the temperatures of 3 cities." << "\n";
	cout << "#1: ";
	cin >> temp1;
	cout << "#2: ";
	cin >> temp2;
	cout << "#3: ";
	cin >> temp3;
}	// end of getTemps()
// ====================================================



// ========= calcAvg ==================================
// This function will take the assigned values and 
// calculate the average temperature of the cities.
//
// Input:
//		The assigned values will be passed to the 
//		function as variables.
//
// Output: 
//		The average temperature will be calculated and
//		the value will be returned to main.
// ====================================================

int calcAvg(int temp1, int temp2, int temp3)
{
	int avg;
	avg = (temp1 + temp2 + temp3) / 3;
	return avg;
}	// end of calcAvg()
// ====================================================



// ========= displayAvg ===============================
// This function will display the average temperature.
//
// Input: 
//		A value that will represent the average will
//		be passed through the funcition.
//
// Output:
//		The function will display the temperature from 
//		the three cities in a simple format.
// ====================================================

void displayAvg(int avg)
{
	cout << "\n";
	cout << "The average temperature is " << avg << " degrees" << "\n";
	cout << "\n";
}	// end of displayAvg()
// ====================================================


/* ==== OUTPUT ==============================================
Enter the temperatures of 3 cities.
#1: 85
#2: 77
#3: 95.6

The average temperature is 85 degrees

Press any key to continue . . . */
