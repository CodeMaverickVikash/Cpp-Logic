/***************** Recursions & Recursive Functions in C++ (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89) ****************/
#include<iostream>
using namespace std;

/************** print the fibonacci series upto Nth term *****************/
int fibonacci(int n){
    int first=0, second=1, next;
    for(int i=0; i<=n; i++){
        if (i<=1)
        {
            next = i;
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

/***************** Print Nth fibonacci number ****************/
int fib(int n){
    if(n<2){
        return n;
    }
    return fib(n-2) + fib(n-1);
}

/******************* Factorial of given number *********************/
int factorial(int n){ // n = 4 , 3 , 2 , 1
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1); // 4 * factorial(3)  = 12; calling and run defination of func
}

int main(){
    /******************* Factorial of given number *********************/
    // n! = n * (n-1)!
    int a=9;
    // cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;

    /******************* Fibonacci series *********************/
    fibonacci(a);
    cout<<endl;

    /***************** Print Nth fibonacci number ****************/
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    

    return 0;
}
