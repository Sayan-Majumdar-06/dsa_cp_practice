// Problem : Comparison String(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1837/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int count = 1;
        int maximum = count;
        
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                count++;
            } else {
                maximum = max(count, maximum);
                count = 1;
            }
        }
        
        maximum = max(maximum, count);
        maximum++;
        
        cout << maximum << "\n";
    }
}