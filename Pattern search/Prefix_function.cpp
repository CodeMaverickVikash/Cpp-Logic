#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
    // Brute froce solution - (N*N*N)
    // int n = (int)s.length();
    // vector<int> pi(n);
    // for (int i = 0; i < n; i++)
    //     for (int k = 0; k <= i; k++)
    //         if (s.substr(0, k) == s.substr(i-k+1, k))
    //             pi[i] = k;
    // return pi;
    // Efficient solution - O(N)
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

int main() {
    string s = "abcabcd";
    for(auto x : prefix_function(s)) cout<<x<<" ";
}