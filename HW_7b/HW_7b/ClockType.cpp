// ================ ClockType.cpp ==================

#include "ClockType.h"

ClockType :: ClockType()
{
	hrs = 0;
	mins = 0;
	secs = 0;
}
// -----------------------------------------------
ClockType::ClockType(int hrs, int mins, int secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}
// -----------------------------------------------
ClockType :: ~ClockType() {};
// -----------------------------------------------
void ClockType::setTime(int hours, int minutes, int seconds)
{
	hrs = hours;
	mins = minutes;
	secs = seconds;
}
// -----------------------------------------------
void ClockType::incrementSeconds()
{
	secs += 1;
}
// -----------------------------------------------
void ClockType::incrementMinutes()
{
	mins += 1;
}
// -----------------------------------------------
void ClockType::incrementHours()
{
	hrs += 1;
}
// ------------------------------------------------
void ClockType::printTime()
{
	cout << setfill('0');
	cout << setw(2) << hrs << ":" 
		<< setw(2) << mins << ":" 
		<< setw(2) << secs << ".\n\n";
}
// -------------------------------------------------
bool operator== (const ClockType &clock1, const ClockType &clock2)
{
	if (clock1.hrs == clock2.hrs && clock1.mins == clock2.mins && clock1.secs == clock2.secs)
	{
		return true;
	}
	else
	{
		return false;
	}
}