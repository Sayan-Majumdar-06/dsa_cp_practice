// Problem : Prepend and Append(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1791/C

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
        
        int ans = s.length();
        
        int i = 0, j = s.length() - 1;
        
        while(i < j) {
            if(s[i] != s[j]) {
                ans -= 2;
                i++;
                j--;
            } 
            else {
                break;
            }
        }
        
        cout << ans << "\n";
    }
}