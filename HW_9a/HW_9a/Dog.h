// ---------- Dog.h -----------------------

#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string name;
	float weight;
	int age;
public:
	Dog(string name, float weight, int age)
	{
		this->name = name;
		this->weight = weight;
		this->age = age;
	}
	~Dog(){}
	void displayDog()
	{
		cout << "NAME: " << name << "\n"
			<< "WEIGHT: " << weight << "\n"
			<< "AGE: " << age << "\n\n";
	}
	bool operator>=(int age)
	{
		return age >= 2;
	}
	bool operator<(Dog &dog)
	{
		return weight < dog.weight;
	}
	bool operator==(Dog &dog)
	{
		return name == dog.name;
	}
	float operator+(Dog &dog)
	{
		return weight + dog.weight;
	}
	friend ostream& operator<<(ostream &stream, Dog &dog)
	{
		stream << "NAME: " << dog.name << "\n"
			<< "WEIGHT: " << dog.weight << "\n"
			<< "AGE: " << dog.age << "\n\n";
		return stream;
	}

};