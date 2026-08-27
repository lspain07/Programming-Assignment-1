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

void personType::print() const
{
	cout << firstName << " " << middleName << " " << lastName << endl;
}

void personType::setName(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}

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
