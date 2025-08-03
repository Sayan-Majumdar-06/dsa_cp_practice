// Problem : Helemets in Night Light (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1876/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n, p;
        cin >> n >> p;
        
        vector<long long> a(n);
        vector<long long> b(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        vector<pair<long long, long long>> val(n);
        
        for(int i = 0; i < n; i++) {
            val[i] = {b[i], a[i]};
        }
        
        sort(val.begin(), val.end());
        
        long long count = p;
        long long shared_to = 1;
        
        for(auto it : val) {
            long long cost = it.first;
            long long can_share_to = it.second;
            
            if(cost >= p) {
                break;
            }
            if(shared_to + can_share_to > n) {
                count += (n - shared_to) * cost;
                shared_to = n;
                break;
            } else {
                count += can_share_to * cost;
                shared_to += can_share_to;
            }
        }
        
        count += p*(n-shared_to);
        cout << count << endl;
        
    }
}