// Problem : Two Permutations(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1761/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b, n;
        cin >> n >> a >> b;
        
        if(a == n && b == n) {
            cout << "YES\n";
        } else {
            if(a+b <= n && n-(a+b) > 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}