#include <sstream>
#include "Person.h"



Person::Person()
{
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge)
{
	name = newName; 
	age = newAge;
}


Person::~Person()
{
}

string Person::toString()
{
	stringstream ss;

	ss << "Name: " << name;
	ss << "; Age: " << age;

	return ss.str();
}
