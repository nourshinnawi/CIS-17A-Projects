//================ Grad.h ===========

#ifndef GRAD_H
#define GRAD_H

#include "Student.h"

class Grad : public Student
{
private:
	string degree;
public:
	Grad(int id, string name, int units, string degree);
	~Grad();
	virtual void displayRecord();
};
#endif
