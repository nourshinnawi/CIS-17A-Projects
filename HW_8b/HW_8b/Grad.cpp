//================ Grad.cpp ===========

#include "Grad.h"

Grad::Grad(int id, string name, int units, string degree)
	: Student(id, name, units)
{
	this->degree = degree;
}
//=================================================
Grad :: ~Grad(){}
//=================================================
void Grad::displayRecord()
{
	Student::displayRecord();
	cout << setw(11) << "Degree: " << degree << "\n\n";
}
//=================================================