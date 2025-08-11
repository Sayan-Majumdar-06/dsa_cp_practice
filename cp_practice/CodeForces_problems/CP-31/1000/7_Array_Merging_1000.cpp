// Problem : Array Merging (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1831/B

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
        
        vector<int> a(n), b(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int temp = 1;
        map<int, int> long_a;
        
        for(int i = 1; i < n; i++) {
            if(a[i-1] == a[i]) {
                temp++;
            } else {
                long_a[a[i-1]] = max(temp, long_a[a[i-1]]);
                temp = 1;
            }
        }
        
        long_a[a[n-1]] = max(temp, long_a[a[n-1]]);
        
        temp = 1;
        map<int, int> long_b;
        
        for(int i = 1; i < n; i++) {
            if(b[i-1] == b[i]) {
                temp++;
            } else {
                long_b[b[i-1]] = max(temp, long_b[b[i-1]]);
                temp = 1;
            }
        }
        
        long_b[b[n-1]] = max(temp, long_b[b[n-1]]);
        
        int max_freq = -1;
        for(int i = 1; i <= 2*n; i++) {
            max_freq = max(max_freq, long_a[i]+long_b[i]);
        }
        
        cout << max_freq << "\n";
    }
}