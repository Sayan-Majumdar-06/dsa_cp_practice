// Problem : Luke is a Foodie (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1704/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n, x;
        cin >> n >> x;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long prev_l = a[0] - x, prev_r = a[0] + x, l = -1, r = -1;
        
        int count = 0;
        
        for(int i = 1; i < n; i++) {
            l = a[i] - x;
            r = a[i] + x;
            
            if(max(prev_l, l) > prev_r || r < prev_l) {
                count++;
                prev_l = l;
                prev_r = r;
            } else {
                prev_l = max(l, prev_l);
                prev_r = min(r, prev_r);
            }
        }
        
        if(max(prev_l, l) > prev_r) {
            count++;
        }
        
        cout << count << "\n";
    }
}