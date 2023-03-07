// ================ ClockType.h =================
#include<iostream>
#include <iomanip>
using namespace std;

class ClockType
{
private:
	int hrs;
	int mins;
	int secs;
public:
	ClockType();
	ClockType(int, int, int);
	~ClockType();
	void setTime(int, int, int);
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	void printTime();
	friend bool operator== (const ClockType &, const ClockType &);
};