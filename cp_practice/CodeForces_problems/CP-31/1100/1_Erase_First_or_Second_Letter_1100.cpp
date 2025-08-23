// Problem : Erase First or Second Letter(CodeForces)
// Rating : 1100
// Problem link : https://codeforces.com/problemset/problem/1917/B

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
        
        string s;
        cin >> s;
        
        set<char> a;
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            a.insert(s[i]);
            count += a.size();
        }
        
        cout << count << "\n";
    }
}