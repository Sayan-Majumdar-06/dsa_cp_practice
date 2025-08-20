// Problem : Strange Partition (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1471/A

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
        
        long long sum = 0;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        long long max_sum = 0;
        
        for(int i = 0; i < n; i++) {
            max_sum += ceil(a[i] * 1.0 / x);
        }
        
        long long min_sum = 0;
        
        if(sum % x == 0) {
            min_sum = sum / x;
        }
        
        else {
            min_sum = (sum / x) + 1;
        }
        
        cout << min_sum << " " << max_sum << "\n";
    }
}