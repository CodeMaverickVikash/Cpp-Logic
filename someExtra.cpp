// #include<iostream>
// using namespace std;

// int main(){
//     int $ = 5;
//     cout<<$<<endl;

//     string _var = "vikash";
//     cout<<_var<<endl;

//     int _ = 2;
//     cout<<_<<endl;

//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // string str = "vikash";

    // sort(str.begin(), str.end());

    // cout<<str<<endl;

    int arr[] = {1, 4, 3, 6, 2, 5};

    // Getting length of array
    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + len); 

    // printing array
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}