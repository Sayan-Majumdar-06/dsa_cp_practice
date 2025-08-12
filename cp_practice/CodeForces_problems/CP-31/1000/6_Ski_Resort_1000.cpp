// Problem : Ski Resort (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1840/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n, k, q;
        cin >> n >> k >> q;
        
        vector<long long> a(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            
            if(a[i] <= q){
                a[i] = 1;
            } else {
                a[i] = 0;
            }
        }
        
        long long count = 0;
        long long ans = 0;
        
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) {
                count++;
            } else {
                if(count >= k) {
                    long long diff = count - k + 1;
                    ans += (diff*(diff+1)) / 2;
                }
                
                count = 0;
            }
        }
        
            if(count >= k) {
                long long diff = count - k + 1;
                ans += (diff*(diff+1)) / 2;
            }
        cout << ans << "\n";
    }
}