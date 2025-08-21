// Problem : Three Indices (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1380/A

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
        
        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        int a = 0, b = 0, c = 0;
        
        for(int i = 1; i < n-1; i++) {
            if(p[i] > p[i-1] && p[i] > p[i+1]) {
                a = i - 1 + 1;
                b = i + 1;
                c = i + 1 + 1;
                break;
            }
        }
        
        if(a == 0 && b == 0 && c == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
    }
}