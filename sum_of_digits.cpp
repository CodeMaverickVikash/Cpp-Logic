#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t; // Read the number of test cases
    
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int ans = 0;
        for(int j = 0; n > 0; j++){
            int rem = n % 10;
            n = n / 10;
            ans += rem;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}