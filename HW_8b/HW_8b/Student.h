//================ Student.h ===========

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
protected:
	int id;
	int units;
	string name;
public:
	Student();
	Student(int id, string name, int units);
	~Student();
	void setId(int id);
	int getId();
	void setName(string name);
	void setUnits(int units);
	int getUnits();
	void displayRecord();
};
#endif