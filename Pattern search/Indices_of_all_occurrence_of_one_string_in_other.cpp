#include <bits/stdc++.h>
using namespace std;

// Problem: Find indices of all occurrence of one string in other
// Brute force solution: O(S*T)
void occurrencesOfstr(string t, string s) {
    // Brute force solution - O(N*M)
    int T = t.size();
    int S = s.size();
    
    // for(int i=0; i<T-S+1; i++) {
    //     if(t.substr(i, S) == s) {
    //         cout<<"Found at index: "<<i<<"\n";
    //     }
    // }
    // Efficient solution - O(S+T) - KMP algorithm
    // int pos = -1;
    // int i=0, j=0;
    // while(i<t.size()) {   
    //     if(t[i] == s[j]) {
    //         j++; i++;
    //     } 
    //     else {
    //         if(j!=0) 
    //             j = prefix[j-1];
    //         else
    //             i++;
    //     }
    //     if(j == s.size()) {
    //         pos = i-s.size();
    //         break;
    //     }
    // }
    // cout<<pos;
}

int main() {
    string t = "apna collegena";
    string s = "na";

    occurrencesOfstr(t, s);
}

// int main() {
//     // string s = "abcabcd";
//     string s = "na";
//     vector<int> prefix = prefix_function(s);
//     // for(auto x : prefix) cout<<x<<" ";
//     string t = "apnacollege";
// }

// Rabin carp algorithm - O(S+T), Based on hashing
// vector<int> rabin_karp(string const& s, string const& t) {
//     const int p = 31; 
//     const int m = 1e9 + 9;
//     int S = s.size(), T = t.size();

//     vector<long long> p_pow(max(S, T)); 
//     p_pow[0] = 1; 
//     for (int i = 1; i < (int)p_pow.size(); i++) 
//         p_pow[i] = (p_pow[i-1] * p) % m;

//     vector<long long> h(T + 1, 0); 
//     for (int i = 0; i < T; i++)
//         h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; 
//     long long h_s = 0; 
//     for (int i = 0; i < S; i++) 
//         h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m; 

//     vector<int> occurences;
//     for (int i = 0; i + S - 1 < T; i++) { 
//         long long cur_h = (h[i+S] + m - h[i]) % m; 
//         if (cur_h == h_s * p_pow[i] % m)
//             occurences.push_back(i);
//     }
//     return occurences;
// }

// int main() {
//     string s = "na";
//     string t = "apnaacollegena";
    
//     for(auto x : rabin_karp(s, t)) cout<<x<<"\n";
// }