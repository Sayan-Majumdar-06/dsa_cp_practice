// Problem : Black and White Stripe (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1690/D

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int ans = INT_MAX;
        
        if(n > 1) {
            vector<int> white_upto(n,0);
            if(s[0] == 'W') {
                white_upto[0]++;
            }
            for(int i = 1; i < n; i++) {
                if(s[i] == 'W') {
                    white_upto[i] += white_upto[i-1] + 1;
                } else {
                    white_upto[i] += white_upto[i-1];
                }
            }
            
            for(int i = 1; i <=  n - k + 1; i++) {
                int count = 0;
                
                if(i == 1) {
                    count = white_upto[i + k - 2];
                } else {
                    count = white_upto[i + k - 2] - white_upto[i-2];
                }
                
                ans = min(ans, count);
            }
        } else {
            if(s[0] == 'W') {
                ans = 1;
            } else {
                ans = 0;
            }
        }
    
        cout << ans << "\n";
    }
}