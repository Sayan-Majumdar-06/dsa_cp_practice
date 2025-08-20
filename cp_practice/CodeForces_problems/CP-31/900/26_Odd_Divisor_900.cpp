// Problem : Odd Divisor (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1475/A

#include<bits/stdc++.h>
using namespace std;

int count_setbit(long long n) {
    int count = 0;
    
    while(n) {
        count += (n & 1);
        
        n = n >> 1;
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        if(n % 2 != 0) {
            cout << "YES\n";
        } else {
            if(count_setbit(n) == 1) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
}