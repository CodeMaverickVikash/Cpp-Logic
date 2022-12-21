#include "employee.h"
#include <iostream>
using namespace std;

// Employee :: Employee()
// {
//     cout<<"Employee object created \n";
// }

Employee :: Employee(int d, string fname, string lname)
{
    cout<<"Employee object created \n";
    this->id = d;
    this->fname = fname;
    this->lname = lname;
}

void Employee :: displayDetails()
{
    cout<<"ID: "<<id<<endl<<"Name: "<<getFullName();
}

string Employee:: getFullName()
{
    return fname +" "+ lname;
}