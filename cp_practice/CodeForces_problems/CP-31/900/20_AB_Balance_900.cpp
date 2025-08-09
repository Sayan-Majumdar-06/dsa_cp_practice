// Problem : AB Balance (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1606/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        if(s[0] != s[s.length()-1]) {
            s[s.length()-1] = s[0];
        }
        
        cout << s << "\n";
    }
}