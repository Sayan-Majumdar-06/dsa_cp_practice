// Problem : Sum of Medians (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1440/B

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
        
        vector<long long> a(n*k);
        for(int i = 0; i < n*k; i++) {
            cin >> a[i];
        }
        
        long long sum = 0;
        
        for(int i = (n * k) - 1 - (n / 2); i >= 0; i -= ((n / 2) + 1)) {
            sum += a[i];
            k--;
            
            if(k == 0) {
                break;
            }
        }
        
        cout << sum << "\n";
    }
}