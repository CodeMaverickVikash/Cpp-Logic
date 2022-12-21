// Classes, Public and Private access modifiers in C++
// Access specifiers define how the members (attributes and methods} of a class can be accessed
// There are three type of access modifiers: 1. public 2. private 3. protected
#include<iostream>
using namespace std;

class Employee
{
    private: // members cannot be accessed (or viewed) from outside the class only member can accessed by this class
        int a, b, c;
    public: // members are accessible from outside the class
        int d, e;

        void setData(int a1, int b1, int c1); // Declaration
        int ok(int n);

        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int Employee :: ok(int n)
{
    return n;
}

int main(){
    Employee vikash;
    // vikash.a = 134; -->This will throw error as a is private
    // vikash.d = 34;
    // vikash.e = 89;
    // vikash.setData(1,2,4);
    // vikash.getData();

    // cout<<vikash.ok(23);
    return 0;
}
