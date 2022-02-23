/*************** to Check if a Given number is Palindrome *************/
// 12321 is palindrome, but 1451 is not palindrome

// #include<iostream>
// using namespace std;

// int rev_num(int num){
//     int rem = 0;
//     for (int i = 0; num != 0; i++)
//     {
//         rem = (rem*10) + num%10;
//         num = num/10;
//     }
//     return rem;
// }

// int main(){
//     int num = 2002;

//     int revNumber = rev_num(num);
//     if(num == revNumber){
//         cout<<"Number is palindrome: "<<num<<endl;
//     }
//     else{
//         cout<<"Number is not palindrome: "<<num<<endl;
//     }

//     return 0;
// }

/**************** to Check if a Given String is Palindrome *************/
#include<iostream>
using namespace std;

string rev_str(string str, int n){
    string reverse_str;
    for (int i = n-1; i >= 0; i--)
    {
        reverse_str += str[i];
    }
    return reverse_str;
}

int main(){
    string str = "abcdcba";
    int len_str = str.length();

    string revString = rev_str(str, len_str);

    if(str == revString){
        cout<<"String is palindrome: "<<str<<endl;
    }
    else{
        cout<<"String is not palindrome: "<<str<<endl;
    }

    return 0;
}