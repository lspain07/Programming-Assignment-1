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
void personType::print(string first, string middle, string last) const
{
	cout << "Original Name: " << firstName << " " << middleName << " " << lastName << endl << endl;
	cout << "Given Name: " << first << " " << middle << " " << last << endl;
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

// boolean functions to test whether or not they match the original name
bool personType::isFirstName(string first) const
{
	return (firstName == first);
}


bool personType::isMiddleName(string middle) const
{
	return (middleName == middle);
}


bool personType::isLastName(string last) const
{
	return (lastName == last);
}

// getters for first name and last name
string personType::getFirstName() const
{
	return firstName;
}


string personType::getLastName() const
{
	return lastName;
}

