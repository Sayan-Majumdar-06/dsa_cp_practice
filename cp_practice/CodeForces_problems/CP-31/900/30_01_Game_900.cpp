// Problem : 01 Game (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1373/B

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
        
        int c_0 = 0, c_1 = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                c_0++;        
            } else {
                c_1++;
            }
        }
        
        if(min(c_0, c_1) % 2 == 1) {
            cout << "DA\n";
        } else {
            cout << "NET\n";
        }
    }
}