﻿#include "person.h"
// Constructor
Person::Person(string nm)
	: name(nm)
{
}
// Print member function
void Person::print()
{
	cout << "Name: " << name << endl;
}