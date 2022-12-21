// Structures, Unions & Enums in C++
#include<iostream>
#include<cstring>
using namespace std;

//Struct holds the value of different datatype and make itself one datatype 
// struct consume 9 byte memory
// struct Employee
// {
//     /* Member of structure */
//     int id; //4
//     char name[20]; //20
//     float salary; //4
                    // Memory occupied 28
// };

// Union provides batter memory management and similer to structure
// you can use one datatype at the time
// Here memory will be share
// after asigning values imafiately you need to use it
// You can not asigning more than one at a time
// one time you can use only one otherwise you get garbage value
union Employee1
{
    /* data */
    int id; //4
    char name[20]; //20
    float salary; //4
                // Memory occupied 20
};


int main(){

    // struct Employee s1;
    // s1.id = 1;
    // strcpy(s1.name, "vikash");
    // s1.salary = 56000;

    // cout<<"Employee ID: "<<s1.id<<"\n"<<"Name: "<<s1.name<<"\n"<<"Salary: "<<s1.salary<<"\n\n";

    // struct Employee s2;
    // s2.id = 2;
    // strcpy(s2.name, "sanu");
    // s2.salary = 66000;

    // cout<<"Employee ID: "<<s2.id<<"\n"<<"Name: "<<s2.name<<"\n"<<"Salary: "<<s2.salary<<"\n";
    
    union Employee1 s1, s2;

    s1.id = 1; // Imadiately use it
    cout<<"Employee ID: "<<s1.id<<"\n";

    strcpy(s1.name, "vikash");
    cout<<"Name: "<<s1.name<<"\n";

    s1.salary = 56000;
    cout<<"Salary: "<<s1.salary<<"\n\n";

    s2.id = 2;
    cout<<"Employee ID: "<<s2.id<<"\n";

    strcpy(s2.name, "sanu");
    cout<<"Name: "<<s2.name<<"\n";

    s2.salary = 66000;
    cout<<"Salary: "<<s2.salary<<"\n";

    // enum Meal{ breakfast, lunch, dinner};// meal have datatype
    // Meal m1 = lunch;
    // cout<<(m1==2)<<endl;

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl; 

    return 0;
}
