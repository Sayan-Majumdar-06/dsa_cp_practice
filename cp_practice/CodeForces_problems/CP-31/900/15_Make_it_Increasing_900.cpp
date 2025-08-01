// Problem : Make it Increasing (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1675/B

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
        for(int i =0; i < n; i++) {
            cin >> a[i];
        }
        
        int count = 0;
        
        for(int i = n-1; i > 0; i--) {
            if(a[i] == 0 && i > 0) {
                count = -1;
                break;
            }
            
            if(a[i-1] >= a[i]) {
                while(a[i-1] >= a[i]) {
                    a[i-1] = a[i-1] / 2;
                    count++;
                }
            }
        }
        
        cout << count << "\n";
    }
}