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

