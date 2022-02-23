/*************** C++ Program to fibonacci series (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89) *************/
// By using iterative way
#include<iostream>
using namespace std;

int printFibo(int num){
    int next;
    static int first = 0, second = 1;
    if (num <= 1)
    {
        return num;
    }
    next = first + second;
    first = second;
    second = next;

    return next; 
}

int fiboAtPosition(int num){
    int next, first = 0, second = 1;
    for (int i = 0; i <= num; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }  
    }
    
    return next;
}

int main(){
    // initialising variables
    // int first=0, second=1, next;

    // int num = 9; // entered nth term
    // //loop for printing fibonacci series
    // for(int p = 0; p <= num; p++)
    // {
    //     if (p <= 1){
    //         next = p;
    //     }
    //     else
    //     {
    //         next = first + second; // 0 1
    //         first = second; // 1 1 2 3
    //         second = next; // 1 2 3 5
    //     }
        
    //     cout<<next<<" ";
    // }

    // cout<<endl;
    // cout<<"The term in fibonacci sequence at position "<<num<< " is "<<next;

    // using function
    int num = 9;

    for (int i = 0; i <= num; i++)
    {
        cout<<printFibo(i)<<" ";
    }

    cout<<endl;
    cout<<"The term in fibonacci sequence at position "<<num<< " is "<<fiboAtPosition(num);

    return 0;
}


// By using recursive way
/******************* Print fibonacci series *********************/
/***************** fibonacci number at position ****************/
// #include<iostream>
// using namespace std;

// int printFibo(int pos){
//     if (pos <= 1)
//     {
//         return pos;
//     }
    
//     return printFibo(pos - 1) + printFibo(pos - 2);
// }

// int main(){
//     int num = 9;

//     for (int i = 0; i <= num; i++)
//     {
//         cout<<printFibo(i)<<" ";
//     }

//     cout<<endl;
//     cout<<"The term in fibonacci sequence at position "<<num<< " is "<<printFibo(num);
    

//     return 0;
// }