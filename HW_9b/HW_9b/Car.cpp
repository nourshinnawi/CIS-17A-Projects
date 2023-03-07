#include "Car.h"

int Car::carCount = 0;
// ==========================================
Car :: Car()
{
	model = " ";
	year = 0;
	carCount++;
}
// ==========================================
Car::Car(string model, int year)
{
	this->model = model;
	this->year = year;
	carCount++;
}
// ==========================================
Car :: ~Car(){}
// ==========================================
void Car::setCar(string model, int year)
{
	this->model = model;
	this->year = year;
}
// ==========================================
int Car :: getCount()
{
	return carCount;
}
// ==========================================
void Car :: displayCar()
{
	cout << "Model: " << model << "\n"
		<< "Year: " << year << "\n\n";
}