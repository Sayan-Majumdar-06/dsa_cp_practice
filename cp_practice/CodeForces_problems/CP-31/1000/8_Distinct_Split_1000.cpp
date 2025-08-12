// Problem : Distinct Split (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1791/D

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
        
        unordered_set<char> str;
        
        vector<int> pre(n+1, 0), suf(n+1, 0);
       
        for(int i = 1; i <= n; i++) {
            str.insert(s[i-1]);
            pre[i] = str.size();
        }
        
        str.clear();
        
        for(int i = n; i >= 1; i--) {
            str.insert(s[i-1]);
            suf[i] = str.size();
        }
        
        str.clear();
        
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            count = max(count, pre[i] + suf[i+1]);
        }
        
        cout << count << "\n";
    }
}