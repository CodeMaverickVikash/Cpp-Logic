/***************** C++ Program to Check Armstrong Number *****************/
// // 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153
// // 1634 = 1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4 = 1643
#include<iostream>
#include<math.h>
using namespace std;

// By iterative way
// int armstrong(int num, int n){
//     int result = 0;
//     int i = 0;
//     while (num > 0)
//     {
//         int rem = num%10;
//         result += (int)(pow(rem, n) + 0.5);
//         num = num/10;
//         i++;
//     }
    
//     return result;
// }

// By recursive way
int armstrong(int num){
    static int len = to_string(num).length();
    if(num == 0){
        return 0;
    }
    return (int)(pow(num % 10, len) + 0.5) + armstrong(num/10);      
}

int main(){
    int num;
    cout<<"Enter number to check armstrong number: ";
    cin>>num;

    // int noOfDigit = to_string(num).length();

    // if (armstrong(num, noOfDigit) == num)
    // {
    //     cout<<"it's a armstrong number "<<num<<endl;
    // }
    // else{
    //     cout<<"it's not a armstrong number "<<num<<endl;
    // }

    // By recursive way
    // if (armstrong(num) == num)
    // {
    //     cout<<"it's a armstrong number "<<num<<endl;
    // }
    // else{
    //     cout<<"it's not a armstrong number "<<num<<endl;
    // }
    

    return 0;
}








// C++ Program to find Nth Armstrong Number
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;

// // Function to find Nth Armstrong Number
// int NthArmstrong(int n)
// {
// 	int count=0;
	
// 	// upper limit from integer
// 	for(int i = 1; i <= INT_MAX; i++)
// 	{
// 		int num=i, rem, digit=0, sum=0;
		
// 		//Copy the value for num in num
// 		num = i;
		
// 		// Find total digits in num
// 		digit = (int) log10(num) + 1;
		
// 		// Calculate sum of power of digits
// 		while(num > 0)
// 		{
// 			rem = num % 10;
// 			sum = sum + pow(rem,digit);
// 			num = num / 10;
// 		}
// 		// Check for Armstrong number
// 		if(i == sum)
// 			count++;
// 		if(count==n)
// 			return i;
// 	}
// }

// // Driver Function
// int main()
// {
// 	int n;
//     cout<<"Enter position and we will give y armstrong no.: ";
//     cin>>n;

// 	cout<<NthArmstrong(n);
// 	return 0;
// }