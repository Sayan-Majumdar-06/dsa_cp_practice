// Problem : Array Cloning Technique (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1665/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        map<long long, long long> hash;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            hash[a[i]]++;
        }
        
        long long max_freq = 0;
        long long max_val = INT_MIN;
        for(auto i : hash) {
            long long temp = max_freq;
            max_freq = max(max_freq, i.second);
        }
        
        int count = 0;
        int ans = n - max_freq;
        while(max_freq < n) {
            if(max_freq * 2 <= n) {
                max_freq *= 2;
                count++;
            } else {
                count++;
                break;
            }
        }
        
        ans += count;
        cout << ans << endl;
    }
}