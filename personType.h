#ifndef PERSON_TYPE_H 
#define PERSON_TYPE_H 

#include <string> 

using namespace std;

class personType
{
public:

    void print(string firstName, string middleName, string lastName) const;
    void setName(string first, string middle, string last);
    void setLastName(string last);
    void setFirstName(string first);
    void setMiddleName(string middle);

    bool isLastName(string last) const;
    // extra function to check if the middle name is the same as the hard coded one
    bool isMiddleName(string middle) const;
    bool isFirstName(string first) const;

    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;

    personType(string first = "", string middle = "", string last = "");

private:

    string firstName;
    string middleName;
    string lastName;
};

#endif
