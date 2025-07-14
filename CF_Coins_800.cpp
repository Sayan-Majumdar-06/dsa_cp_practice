// Problem : Coins(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/contest/1814/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n, k;
        cin >> n >> k;
        
        if(n % 2 == 0 || n % k == 0 ||  (n-k) % 2 == 0 || (n-2) % k == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}