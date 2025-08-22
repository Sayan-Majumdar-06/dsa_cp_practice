// Problem : Odd Queries(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1807/D

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<long long> pre_sum(n);
        long long sum = 0;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(i > 0) {
                pre_sum[i] = pre_sum[i-1] + a[i];
            } else {
                pre_sum[i] = a[i];
            }
        }
        
        while(q--) {
            long long l, k, r;
            cin >> l >> r >> k;
            
            l--;
            r--;
            
            long long sub_sum = 0;
            
            if(l > 0) {
                sub_sum = pre_sum[r] - pre_sum[l-1];
            } else {
                sub_sum = pre_sum[r];
            }
            long long replace_sum = (r - l + 1) * k;
            
            if((sum - sub_sum + replace_sum) % 2 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        
        
    }
}