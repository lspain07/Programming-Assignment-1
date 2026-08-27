// Lukas Spain

#include <iostream>
#include "personType.h"

using namespace std;

int main() 
{
    personType person("Lukas", "Ray", "Spain");
    string firstName;
    string middleName;
    string lastName;
    cout << "Enter Your First Name: ";
    cin >> firstName;
    cout << "Enter Your Middle Name: ";
    cin >> middleName;
    cout << "Enter Your Last Name: ";
    cin >> lastName;
    if (person.isFirstName(firstName))
    {
        cout << "The first name matches." << endl;
    }
    else
    {
        cout << "The first name doesn't match." << endl;
    }
    if (person.isMiddleName(middleName))
    {
        cout << "The middle name matches." << endl;
    }
    else
    {
        cout << "The middle name doesn't match." << endl;
    }
    if (person.isLastName(lastName))
    {
        cout << "The last name matches." << endl;
    }
    else
    {
        cout << "The last name doesn't match." << endl;
    }
    person.print(firstName, middleName, lastName);


    return 0;
}