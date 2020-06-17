#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
private:
	string name;
	string secondName;
	int age;
public:
	Person(string, string, int);
	friend ostream& operator<<(ostream &wyjscie, const Person& s);
	~Person();
};

