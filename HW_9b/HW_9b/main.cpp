// File: HW_9b.cpp
// ====================================================
// Programmer: Nour Shinnawi
// Class: CIS 17A
// Instructor: Dennis Rainey
//
// Description: 
// This program will output information about cars,
// check to see if they are the same, and display the
// amount of car objects that have been declared.
// ====================================================

#include "Car.h"

int main()
{
	Car myCar;
	Car yourCar("Toyota", 2007);

	cout << "My Car \n";
	myCar.displayCar();

	cout << "Your Car \n";
	yourCar.displayCar();

	myCar.setCar("Ford", 2002);
	cout << "My Car \n";
	myCar.displayCar();

	areSame(myCar, yourCar);

	cout << Car::getCount() << " cars have been declared.\n\n";

	return 0;
}
//===========================================================
void areSame(Car &car1, Car &car2)
{
	if ((car1.model != car2.model) && (car1.year != car2.year))
	{
		cout << "The two cars are not the same model and year. \n\n";
	}
	else
	{
		cout << "The two cars are similar.\n\n";
	}
}
/*------------------- OUTPUT ------------------------
My Car
Model:
Year: 0

Your Car
Model: Toyota
Year: 2007

My Car
Model: Ford
Year: 2002

The two cars are not the same model and year.

2 cars have been declared.

Press any key to continue . . .
*/