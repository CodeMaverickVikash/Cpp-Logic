#include <string>
// using namespace std; // We should not use here it decrease the performance and efficiency of program
// we are not ok to use using directives in header file

class Employee
{
    public:
        int id;
        std::string fname;
        std::string lname;

        // Employee();
        Employee(int, std::string, std::string);

        std::string getFullName();
        void displayDetails();
};