#include "student.h"
// Parameter Constructor
Student::Student(int id, const string& name, double gpa)
	: Id(id), Gpa(gpa)
{
	strcpy_s(Name, name.c_str());
	if (Id < 1 || Id > 99)
	{
		cout << "Identity is out of range. Program aborted.";
		assert(false);
	}
	if (Gpa < 0.0 || Gpa > 4.0)
	{
		cout << "The gpa value is out of range. Program aborted.";
		assert(false);
	}
}
// Default Constructor
Student::Student() {}
// Destructor
Student :: ~Student() {}
// Accessor function
int Student::getId() const {
	return Id;
}
// Accessor function
string Student::getName() const {
	return Name;
}
// Accessor function
double Student::getGpa() const
{
	return Gpa;
}