/*
*  Defination: Encapsulation is defined as wrapping up of data and information under a single unit
*  Encapsulation is defined as binding together the data and the functions that manipulates them.
*  Encapsulation also lead to data abstraction or hiding.
*  In C++ encapsulation can be implemented using Class and access modifiers.
*/

/*
Note: If we do not specify any access modifiers for the members inside the class then by default the access modifier for the members will be Private.
*/


#include<iostream>
using namespace std;
  
class Encapsulation // class is working as a unit
{
    private:
        // data hidden from outside world
        int x;
          
    public:
        // function to set value of 
        // variable x
        void set(int a)
        {
            x =a;
        }
          
        // function to return value of
        // variable x
        int get()
        {
            return x;
        }
};
  
// main function
int main()
{
    Encapsulation obj;
      
    obj.set(5);
      
    cout<<obj.get();
    return 0;
}


/*
*  the variable x and the functions get() and set() are binded together which is nothing but encapsulation.
*/