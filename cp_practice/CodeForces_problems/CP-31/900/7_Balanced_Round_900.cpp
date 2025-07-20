// Problem : Balanced Round(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1850/D

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        int count = 1;
        int maximum = count;
        
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i-1] <= k) {
                count++;
            } else {
                maximum = max(maximum, count);
                count = 1;
            }
        }
        
        maximum = max(count, maximum);
        
        cout << n-maximum << "\n";
    }
}