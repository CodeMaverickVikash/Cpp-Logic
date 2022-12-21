// // Call by Value & Call by Reference in C++
// // void method is not return aninputthing but it can override or operation 
// // int method is perform operation and return something
// #include<iostream>
// using namespace std;

// // This will not swap a and b
// void swap(int a, int b){ 
//     int temp = a;       
//     a = b;               
//     b = temp;           
// }

// // Call by reference using pointers
// void swapPointer(int* a, int* b){
//     int temp = *a;             
//     *a = *b;               
//     *b = temp;             
// }

// // Call by reference using reference Variables
// void swapReferenceVar(int &a, int &b){
//     int temp = a;             
//     a = b;               
//     b = temp; 
// }

// int main(){
//     int x =4, y=5;
//     // swap(x, y); // This will not swap a and b
//     swapPointer(&x, &y); // Call by reference using pointers
//     // swapReferenceVar(x, y); // Call by reference using reference Variables
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

//     // int *a = &x;
//     // cout<<a<<endl;
//     // int &v = x; // x and v are connected
//     // cout<<&v<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// // call by value
// // int add(int x){
// //     int input;
// //     cout<<"Enter value to be added in data: ";
// //     cin>>input;
// //     x = x + input;
// //     return x;
// // }

// // call by reference
// void add(int &x){
//     int input;
//     cout<<"Enter value to be added in data: ";
//     cin>>input;
//     x = x + input;
// }

// int main(){
//     int data = 4;

//     // call by value
//     // data = add(data);
//     // cout<<"Value of data = "<<data<<endl;

//     // call by reference
//     add(data);
//     cout<<"Value of data = "<<data<<endl;

//     return 0;
// }