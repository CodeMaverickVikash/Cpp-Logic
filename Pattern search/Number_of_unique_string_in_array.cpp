#include <bits/stdc++.h>
using namespace std;

long long calculate_hash(string s) {
    int p = 31;
    int m = 1e9 + 9;
    long power_of_p = 1;
    long hash_val = 0;

    for(int i = 0; i < s.length(); i++) {
        hash_val = (hash_val + (s[i]-'a' + 1) * power_of_p) % m;
        power_of_p = (power_of_p * p) % m;
    }
    return hash_val;
}

int unique_string(vector<string> s) {
    // Brute force solution - O(nmLog(N))
    // sort(s.begin(), s.end());
    // int distinct = 0;
    // for(int i=0; i<s.size(); i++) {
    //     if(i==0 or s[i] != s[i-1]) {
    //         distinct++;
    //         cout<<s[i]<<" ";
    //     }
    // }
    // return distinct;
    // Efficient solution - O(nm + nlog(n))
    vector<long long> hashes;
    for(auto w : s) {
        hashes.push_back(calculate_hash(w));
    }
    sort(hashes.begin(), hashes.end());
    int distinct = 0;
    for(int i=0; i<hashes.size(); i++) {
        if(i==0 or hashes[i] != hashes[i-1]) {
            distinct++;
            cout<<s[i]<<" ";
        }
    }
    return distinct;
}

int main() {
    vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};
    
    cout<<unique_string(strings);

    return 0;
}
