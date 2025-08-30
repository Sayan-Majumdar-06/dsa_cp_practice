// Problem : Beautiful Array (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1715/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        
        if(s < b*k || s > (b*k + (n)*(k-1))) {
            cout << "-1\n";
        } else {
            vector<long long> a(n, 0);
            a[0] = b * k;
            
            long long s1 = s - k*b;
            for(int i = 0; i < n; i++) {
                a[i] += min(k-1, s1);
                s1 -= min(s1,(k-1));
            }
            
            for(int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            
            cout << "\n";
        }
    }
}