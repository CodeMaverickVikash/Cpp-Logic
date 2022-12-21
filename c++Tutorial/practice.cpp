#include<iostream>
using namespace std;
// 0 1 1 2 3 5
int fib(int a){
    int first=0, second=1, next;
    for (int p = 0; p<=a; p++)
    {
        if (p<=1)
        {
            next = p;
        }
        else
        {
            next = first + second; // 0 1
            first = second; // 1 1 2 3
            second = next; // 1 2 3 5
        }
        cout<<next<<" ";
    }
    return 0;
}

int main(){
    int a=5;
    fib(a);

    return 0;
}