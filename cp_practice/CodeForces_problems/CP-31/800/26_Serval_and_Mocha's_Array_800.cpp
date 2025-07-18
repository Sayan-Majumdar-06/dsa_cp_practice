// Problem : Serval and Mocha's Array(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1789/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string ans = "NO";
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    if(__gcd(a[i], a[j]) <= 2) {
                        ans = "YES";
                        break;
                    } else {
                        ans = "NO";
                    }
                }
            }
            if(ans == "YES") {
                break;
            }
        }
        
        cout << ans << "\n";
    }
}