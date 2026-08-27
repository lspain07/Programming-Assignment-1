#include <iostream>
#include "personType.h"

using namespace std;

// Default constructor for our most important class
personType::personType(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}

// printing out all names
void personType::print() const
{
	cout << firstName << " " << middleName << " " << lastName << endl;
}

// setters for all names
void personType::setName(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}

// setters for individual names
void personType::setFirstName(string first)
{
	firstName = first;
}

void personType::setMiddleName(string middle)
{
	middleName = middle;
}

void personType::setLastName(string last)
{
	lastName = last;
}


bool personType::isFirstName(string first) const
{
	return (firstName == first);
}


bool personType::isLastName(string last) const
{
	return (lastName == last);
}
