// Problem : Not Dividing(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1794/B

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
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for(int i = 0; i < n-1; i++) {
            if(a[i] == 1) {
                a[i] += 1;
                
                if(i > 0 && a[i-1] == 2) {
                    a[i] += 1;
                }
                
                a[i+1] += 1;
            }
            
            if(a[i+1] % a[i] == 0) {
                a[i+1] += 1;
            }
        }
        
        for(auto x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }
}