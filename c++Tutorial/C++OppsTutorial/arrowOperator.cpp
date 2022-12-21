// // make Pointers of Objects and Arrow Operator in CPP
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary; // by default private
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;  // pointer is pointing to object
    // (*ptr).setData(1, 54); // or ptr->setData(1, 54); both are same 
    // (*ptr).getData();
    
    Complex *ptr = new Complex; // it is also the way of creating obj.
    ptr->setData(1, 54); // better way  
    ptr->getData(); 


    // Array of Objects
    // Complex *ptr1 = new Complex[4]; 
    // ptr1->setData(1, 4); 
    // ptr1->getData();
    // return 0;
}

// Array of Objects Using Pointers in C++
// #include<iostream>
// using namespace std;

// class ShopItem
// {
//     int id;
//     float price;
//     public:
//         void setData(int a, float b){
//             id = a;
//             price = b;
//         }
//         void getData(void){
//             cout<<"Code of this item is "<< id<<endl;
//             cout<<"Price of this item is "<<price<<endl;
//         }
// };

// int main(){
//     int size = 3;
//     // int *ptr = &size;
//     // int *ptr = new int [34]; // dynamically 34 integer ko store karne ke liye memory allocate kar do 

//     // 1. general store item
//     // 2. veggies item
//     // 3. hardware item
//     ShopItem *ptr = new ShopItem [size];
//     ShopItem *ptrTemp = ptr; // ptr is first address of object one
//     int p, i;
//     float q;
//     for (i = 0; i < size; i++)
//     {
//         cout<<"Enter Id and price of item "<< i+1<<endl;
//         cin>>p>>q;
//         // (*ptr).setData(p, q);
//         ptr->setData(p, q);
//         ptr++; 
//     }

//     for (i = 0; i < size; i++)
//     {
//         cout<<"Item number: "<<i+1<<endl;
//         ptrTemp->getData();
//         ptrTemp++;
//     }
    
    
//     return 0;
// }

// this Pointer in C++
// #include<iostream>
// using namespace std;

// class A{
//     int a;
//     public:
//         // A & setData(int a){
//         void setData(int a){
//             this->a = a;
//             // return *this;
//         }

//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };

// int main(){
//     // this is a keyword which is a pointer which points to the object which invokes the member function
//     A a;
//     a.setData(4);
//     a.getData();
//     return 0;
// }