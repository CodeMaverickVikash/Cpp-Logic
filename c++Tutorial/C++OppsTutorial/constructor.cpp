/* Constructor in cpp

Constructor is a special member function with the same name as of the class.

*/

/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

//     public:
//         // Creating a Constructor

//         Complex(void); // Constructor declaration

//         void printNumber()
//         {
//             cout << "Your number is " << a << " + " << b << "i" << endl;
//         }
// };

// Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
// {
//     a = 0;
//     b = 0;
//     // cout<<"Hello world";
// }

// int main()
// {
//     Complex c1, c2, c3;
//     c1.printNumber();
//     c2.printNumber();
//     c3.printNumber();

//     return 0;
// }

/************* END ***************/


/************* Constructor Overloading In C++ ***************/

// #include <iostream>
// using namespace std;

// /*

//  1. function overloading and overriding
//  2. constructor overloading and overriding
//  3. operator overloading and overriding

// */

// class Complex
// {
//     int a, b;

//     public:
//         Complex(){
//             a = 0;
//             b =0;
//         }

//         Complex(int x){
//             a = x;
//             b = 0;
//         }

//         Complex(int x, int y)
//         {
//             a = x;
//             b = y;
//         }    

//         void printNumber()
//         {
//             cout << "Your number is " << a << " + " << b << "i" << endl;
//         }
// };

// int main()
// {
//     Complex c3; // Default constructor
//     c3.printNumber();

//     Complex c2(5);
//     c2.printNumber();

//     Complex c1(4, 6); // Parameterized constructor
//     c1.printNumber();

//     return 0;
// }

/********************* END **********************/

/***************** Constructors With Default Arguments In C++ *****************/

// #include<iostream>
// using namespace std;

// class Simple{

//     int data1;
//     int data2;
//     int data3;

//     public:
//         Simple(int a, int b=9, int c=8){
//             data1 = a;
//             data2 = b;
//             data3 = c;
//         }

//         void printData();

// };

// void Simple :: printData(){
//     cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
// }

// int main(){

// 	// Simple s(23);
//     Simple s(12, 89, 56);

//     s.printData();
//     return 0;
// }
