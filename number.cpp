#include <bits/stdc++.h> // this header file include all standard library for saving time in coding contest
using namespace std;

/************** Reversed number *******************/
// Method 1 : ITERATIVE WAY
// int ReversedNumber(int num)
// {
//     int rev_num = 0;
//     while (num > 0) {
//         // rev_num = num % 10; // for it will be overrite
//         rev_num = rev_num * 10 + num % 10; // this for protecting from overrite
//         num = num / 10;
//     }
//     return rev_num;
// }

// Method 2 : RECURSIVE WAY
// int ReversedNumber(int num) // num = 1234
// {
// 	// static means value not change during all program
//     static int rev_num = 0;
//     static int base_pos = 1;
//     if (num > 0) {

//         ReversedNumber(num / 10); // num = 123; num = 12; num = 1; num = 0.1

//         rev_num += (num % 10) * base_pos; // 0 += 1*1 = rev_num = 1; 1 += 2*10 = rev_num = 21; 21 += 3*100 = rev_num = 321; 321 += 4*1000 = rev_num = 4321
//         // cout<<rev_num<<" ";
//         base_pos *= 10; // 1*10 = 10; 10*10 = 100; 100*10 = 1000;
//         // cout<<base_pos<<" ";
//     }
//     return rev_num;
// }

/****************** swapping two number ******************/
// using third variable
// int swapNumber(int a, int b){
// 	int temp;
//     temp = a;
//     a = b;
//     b = temp;
// 	return 0;
// }

int swapNumber(int a, int b){
    
}

/************ Sum of entered number *************/
// int sumNumber(int num){
//     if(num <= 1){
//         return num;
//     }
//     return num + sumNumber(num-1);
// }

/***************** Driver code *******************/
int main(){
	int num = 1234;

	ReversedNumber(num);
	// cout<<"Reversed number is "<<ReversedNumber(num);

	// int a=4, b=5;
	// swapNumber(a, b);

    /************ Sum of entered number *************/
    // int num2 = 5;
    // // cout<<sumNumber(num2);

    // if(num2 <= 1){
    //     cout<<num2<<endl;
    // }
    // else{
    //     for (int i = num2-1; i >= 1; i--)
    //     {
    //         num2 = num2+i;
    //     }
        
    // }
    // cout<<num2<<endl;
    
    

	return 0;
}