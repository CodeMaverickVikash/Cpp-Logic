#include<bits/stdc++.h>
using namespace std;

long long compute_hash(string s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

int main() {
    string str = "geeksforgeeks";
    cout<<compute_hash(str);
}


// You can generate hash of string and character
// String Polynomial Hashing or String hashing