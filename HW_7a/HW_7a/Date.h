//-------- Date.h -----------

#include <iostream>
#include <cmath>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;
	int add;
public:
	Date();
	Date(int Month, int Day, int Year);
	~Date();
	void setDate(int, int, int);
	void addDays(int);
	void displayDate();
};