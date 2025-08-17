// Problem : Exciting Bets (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1543/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b;
        cin >> a >> b;
        
        if(a == b) {
            cout << "0 0\n";
        } else {
            long long max_gcd = min(max(a, b), abs(b-a));
            
            long long steps = 0;
            
            if(max_gcd == max(a,b)) {
                steps = min(a,b);
            } else {
                long long steps_p = b % max_gcd;
                long long steps_n = max_gcd - steps_p;
                
                steps = min(steps_p, steps_n);
            }
            cout << max_gcd << " " << steps << "\n";
        }
    }
}