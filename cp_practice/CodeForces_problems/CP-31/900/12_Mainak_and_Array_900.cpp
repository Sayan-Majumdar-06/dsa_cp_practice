// Problem : Mainak and Array(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1726/A

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
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int max_diff = 0;
        
        for(int i = 1; i < n; i++) {
            int temp = a[i] - a[0];
            max_diff = max(temp, max_diff);
        }
        
        for(int i = 0; i < n-1; i++) {
            int temp = a[n-1] - a[i];
            max_diff = max(temp, max_diff);
        }
        
        for(int i = 0; i < n-1; i++) {
            int temp = a[i] - a[i+1];
            max_diff = max(max_diff, temp);
        }
        
        int last_diff = a[n-1] - a[0];
        max_diff = max(last_diff, max_diff);
        
        cout << max_diff << "\n";
    }
}