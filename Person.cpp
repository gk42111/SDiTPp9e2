#include "Person.h"

Person::Person(string name, string secondName, int age)
{
	this->name = name;
	this->secondName = secondName;
	this->age = age;
}

Person::~Person()
{
}

ostream & operator<<(ostream & wyjscie, const Person & s)
{
	return wyjscie << s.name << " " << s.secondName << " " << s.age << endl;
}
