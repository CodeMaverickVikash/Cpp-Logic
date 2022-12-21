#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    cout<<*ptr<<endl;

    // new keyword
    // dynamic initialization
    int *p = new int(40); // we make dynamic int which has 40 value and point them using pointer
    // delete p;
    cout<<*p<<endl;

    // we want allocate block of memory(array) dynamically to storeing 4 int
    int *arr = new int[3]; // 3 size array make dynamically
    arr[0] = 10;
    // arr[1] = 15;
    *(arr+1) = 15;
    arr[2] = 16;
    // delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}