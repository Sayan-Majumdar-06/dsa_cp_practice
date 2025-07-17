// Problem : A
// Link : https://codeforces.com/contest/2126/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int x;
        cin >> x;
        
        vector<int> dig;
        for(int i = x; i != 0; i/=10) {
            int digit = i % 10;
            dig.push_back(digit);
        }
        
        int ans = *min_element(dig.begin(), dig.end());
        
        cout << ans << "\n";
    }
}