#include "student.h"

void student::setName(string &first, string &last)
{
    firstName = first;
    lastName = last;
}
string student::fullName()
{
    string fullName;
    fullName = firstName;
    fullName.append(" ");
    fullName.append(lastName);
    return fullName;
}
