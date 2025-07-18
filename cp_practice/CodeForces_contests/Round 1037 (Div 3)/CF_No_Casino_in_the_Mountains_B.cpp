// Problem : B (upsolved)
// Link : https://codeforces.com/contest/2126/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int count = 0;
        int ans = 0;
        
        for(int i = 0; i < n;) {
            if(a[i] == 0) {
                count++;
                i++;
            } else {
                count = 0;
                i++;
            }
            
            if(count == k) {
                ans++;
                count = 0;
                i++;
            }
        }
        
        cout << ans << endl;
    }
}