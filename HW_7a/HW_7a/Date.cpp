//--------------- Date.cpp -----------------

#include "Date.h"

Date :: Date()
{
	this->month;
	this->day;
	this->year;
	this->add;
}
//------------------------------------
Date::Date(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}
//------------------------------------
Date :: ~Date(){}
//------------------------------------
void Date :: setDate(int numMonth, int numDay, int numYear)
{
	month = numMonth;
	day = numDay;
	year = numYear;
}
//-----------------------------------------------------
void Date :: addDays(int moreDays)
{
	add = moreDays;

	if (day < 30)
	{
		day += moreDays;
		if (day > 30)
		{
			day = abs(0 + 30 - day);
			month += 1;
		}
	}
	else if (month = 12)
	{
		day = abs(0 + 30 - day);
		month = 1;
		year += 1;
	}
}
//----------------------------------------------
void Date :: displayDate()
{
	cout << month << "/"
		<< day << "/"
		<< year << ".\n";
}