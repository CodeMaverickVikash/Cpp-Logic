/*
* Defination: The capability of a class to derive properties and characteristics from another class is called Inheritance.
*/

#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
	public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
	void show_data();
};

void Child::show_data()
{
	cout<<"Hello\n";
}

//main function
int main()
{
	
		Child obj1;
		
		// An object of class child has all data members
		// and member functions of class parent
		obj1.id_c = 7;
		obj1.id_p = 91;
		obj1.show_data();
		cout << "Child id is " << obj1.id_c << endl;
		cout << "Parent id is " << obj1.id_p << endl;
		
		return 0;
}
