// Problem : Luntik and Subsequences (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1582/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        long long sum = 0;
        int o_count = 0;
        int z_count = 0;
        long long ans = 0;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1) {
                o_count++;
            }
            else if(a[i] == 0) {
                z_count++;
            }
            sum += a[i];
        }
        
        if(o_count != 0) {
            if(z_count == 0) {
                ans = o_count;
            } 
            else {
                ans = o_count * pow(2,z_count);
            }
        }
        
        cout << ans << "\n";
    }
}