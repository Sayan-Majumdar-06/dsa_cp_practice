// Problem : Jellyfish and Undertale(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1875/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        
        vector<long long> x(n);
        for(int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        long long count = 0;
        
        for(int i = 0; i < n; i++) {
            count += min(x[i], a-1);
        }
        
        count += b;
        
        cout << count << "\n";
    }
}