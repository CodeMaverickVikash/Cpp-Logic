/*************** Factorial of a number *************/
// #include<iostream>
// using namespace std;

// By iterative way
// int factorial(int num){
//     int temp = num;
//     while (num > 1)
//     {
//         temp *= num - 1;
//         num--;
//     }
//     return temp;
// }

// By recursive way
// int factorial(int num){
//     if(num <= 1){
//         return num;
//     }

//     return num * factorial(num - 1);
// }

// int main(){
//     int num = 6;

//     // // By iterative way
//     // cout<<factorial(num)<<endl;

//     // // By recursive way
//     cout<<factorial(num);

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // ios::sync_with_stdio(0);
//     // cin.tie(0);

//     int s,left=0,right=5,middle=0;
//     cout<<"Enter the element to search";
//     cin>>s;

//     int arr[]={1,2,3,4,5}; // array will be sorted before applying binary search

//     while(left<=right){
//         middle =(left+right)/2; // 2

//         if(arr[middle]==s){
//             break;
//         }
//         if(arr[middle]<s){
//             left=left+1;
//         }
//         if(arr[middle]>s)
//         {
//             right=right-1;
//         }
//     }
//     cout<<"entered element is at"<<middle;
//     return 0;
// }