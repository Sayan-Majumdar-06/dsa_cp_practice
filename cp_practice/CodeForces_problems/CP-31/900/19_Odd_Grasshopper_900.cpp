// Problem : Odd Grasshopper (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1607/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long x_0, n;
        cin >> x_0 >> n;
        
        long long ans = 0;
        
        long long uncovered = n % 4;
        
        if(uncovered == 0) {
            ans = x_0;
        } else if(uncovered == 3) {
            if(x_0 % 2 == 0) {
                ans = x_0 + n + 1;
            } else {
                ans = x_0 - n - 1;
            }
        }  else if(uncovered == 2) {
            if(x_0 % 2 == 0) {
                ans = x_0 + 1;
            } else {
                ans = x_0 - 1;
            }
        } else if(uncovered == 1) {
            if(x_0 % 2 == 0) {
                ans = x_0 - n;
            } else {
                ans = x_0 + n;
            }
        }
        
        cout << ans << "\n";
    }
}