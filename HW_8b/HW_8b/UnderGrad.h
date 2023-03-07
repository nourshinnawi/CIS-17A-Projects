//================ UnderGrad.h ===========

#ifndef UNDERGRAD_H
#define UNDERGRAD_H

#include "Student.h"

class UnderGrad : public Student
{
private:
	string level;
public:
	UnderGrad(int id, string name, int units, string level);
	~UnderGrad();
	virtual void displayRecord();
};
#endif