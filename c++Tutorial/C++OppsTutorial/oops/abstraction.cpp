/*
* Defination: Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.
*  We can implement Abstraction in C++ using classes. Class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to outside world and which is not.
*  Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members
* In other word we can achieve abstration in c++ using access specifiers
*/

#include<iostream>
using namespace std;

class implementAbstraction
{
    private:
    	// data hidden from outside world
        int a, b; // Abstration achieved
  
    public:
      
        // method to set values of 
        // private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
  
int main() 
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}