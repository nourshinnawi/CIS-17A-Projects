//================ UnderGrad.cpp ===========

#include "UnderGrad.h"

UnderGrad::UnderGrad(int id, string name, int units, string level)
	: Student(id,name,units)
{
	this->level = level;
}
//=================================================
UnderGrad :: ~UnderGrad(){}
//=================================================
void UnderGrad::displayRecord()
{
	Student::displayRecord();
	cout << setw(10) << "Class: " << level << "\n\n";
}
//=================================================