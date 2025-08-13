// Problem : B 
// Link : https://codeforces.com/contest/2125/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        
        if(a <= k && b <= k) {
            cout << 1 << "\n";
        } else {
            if (a == b) {
                cout << 1 << "\n";
            } else { 
                if((max(a,b) / __gcd(a,b)) <= k) {
                    cout << 1 << "\n";
                }
                else {
                    cout << 2 << "\n";
                }
            }
        }
    }
}