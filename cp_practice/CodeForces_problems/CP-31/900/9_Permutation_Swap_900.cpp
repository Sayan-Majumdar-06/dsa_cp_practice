// Problem : Permutation Swap(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/contest/1828/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        vector<int> k;
        for(int i = 0; i < n; i++) {
            cin >> p[i];
            if(abs(p[i] - i - 1) != 0) {
                k.push_back(abs(p[i] - i - 1));
            }
        }
        
        int gcd = *max_element(k.begin(), k.end());
        for(auto x : k) {
            gcd = __gcd(gcd, x);
        } 
        
        cout << gcd << "\n";
    }
}