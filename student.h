#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

using std::string;

class student
{
    private:
    string firstName;
    string lastName;
    public:
    void setName(string &first, string &last);
    string fullName();
};
#endif
