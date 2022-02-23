#include<iostream>
using namespace std;

int main()
{
    // string s1 = "Vikash";
    // string s2 = "Maskhare";

    // cout<<s1+s2;

    int n1 = 12;
    int n2 = 34;

    string s = to_string(n1) + to_string(n2); // int to string use to_string()
    // cout<<s;
    
    // cout<<int(s); // this will throw an error
    cout<<stoi(s); // string to int use stoi()
}