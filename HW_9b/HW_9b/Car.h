// ---------------- Car.h -------------------------
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string model;
	int year;
	static int carCount;
public:
	Car();
	Car(string model, int year);
	~Car();
	void setCar(string model, int year);
	static int getCount();
	void displayCar();
	friend void areSame(Car &car1, Car &car2);
};
