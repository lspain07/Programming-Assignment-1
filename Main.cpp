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
    person.isFirstName(firstName);
    person.isMiddleName(middleName);
    person.isLastName(lastName);
    person.print(firstName, middleName, lastName);


    return 0;
}