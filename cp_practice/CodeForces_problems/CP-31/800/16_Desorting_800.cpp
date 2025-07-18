// Problem : Desorting(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1853/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int min_diff = a[1] - a[0];
        
        for(int i = 2; i < n; i++) {
            int diff = a[i] - a[i-1];
            if(diff <= min_diff) {
                min_diff = diff;
            }
        }
        
        int ans = 0;
        
        if(min_diff < 0) {
            cout << ans << "\n";
        } else {
            ans = (min_diff / 2) + 1;
            cout << ans << "\n";
        }
    }
}