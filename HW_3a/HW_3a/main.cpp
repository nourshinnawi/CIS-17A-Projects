// Attached: HW_ 3a
// =============================
// File: HW_2c
// =============================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
// =============================
#include <iostream>
#include <iomanip>
#include "time.h"
using namespace std;
// ------------------------------
void getTime(Time &time);
void addOneSecond(Time &time);
char displayTime(Time &time);
bool isTimeValid(Time &time);

int MAX_HOURS = 23;
int MAX_MINS = 59;
int MAX_SECS = 59;

// ------------------------------
int main()
{
	Time time;
	char answer;

	do
	{
			system("cls");

			getTime(time);
			addOneSecond(time);
			answer = displayTime(time);
	} 
	while (answer == 'Y' || answer == 'y');

	return 0;
}
// ---------------------------------------------
void getTime(Time &time)
{
	cout << "Enter the time in 'military time', (24-hour format), " << "\n";
	cout << "in the following order: HH:MM:SS, (Hours, Minutes, Seconds)." << "\n";

	do 
	{
		cout << "Hours: " ;
		cin >> time.hours;

		cout << "Minutes: ";
		cin >> time.minutes;

		cout << "Seconds: ";
		cin >> time.seconds;
	} 
	while (isTimeValid(time) != true);
}
// -------------------------------------------------
bool isTimeValid(Time &time)
{
	if ((time.hours >=0) && (time.hours <= MAX_HOURS) && (time.minutes >=0) && (time.minutes <= MAX_MINS) && (time.seconds >=0) && (time.seconds <= MAX_SECS))
	{
		return true;
	}
	else
	{
		return false;
		cout << "Invalid data.";
	}
}
// -------------------------------------------------
void addOneSecond(Time &time)
{
	time.seconds++;
	
	if (time.seconds > MAX_SECS)
	{
		time.seconds = 0;
		time.minutes++;
	}
	if (time.minutes > MAX_MINS)
	{
		time.minutes = 0;
		time.hours++;
	}
	if (time.hours > MAX_HOURS)
	{
		time.hours = 0;
	}
}
// ---------------------------------------------
char displayTime(Time &time)
{
	char answer;
	cout << "After adding one second, the time is: " << setw(2) << cout.fill('0') << time.hours << ":"
		<< setw(2) << cout.fill('0') << time.minutes << ":" << setw(2) << cout.fill('0') << time.seconds;
	cout << "\n";
	cout << "Do it again? (Y/N) ";
	cin >> answer;

	return answer;
}
/* ---------- OUTPUT ------------------
Enter the time in 'military time', (24-hour format),
in the following order: HH:MM:SS, (Hours, Minutes, Seconds).
Hours: 14
Minutes: 22
Seconds: 47
After adding one second, the time is: 000:000:00
Do it again? (Y/N) n
*/

