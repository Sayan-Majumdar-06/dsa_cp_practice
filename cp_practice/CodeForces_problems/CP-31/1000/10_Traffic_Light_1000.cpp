// Problem : Traffic Light (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1744/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        char c;
        cin >> n >> c;
        
        string s;
        cin >> s;
        
        string s_copy = s + s;
        int g_found = 0;
        int g_loc = -1;
        int ans = 0;
        
        for(int i = 2*n - 1; i >= 0; i--) {
            if(s_copy[i] == 'g') {
                g_found = 1;
                g_loc = i;
            }
            
            else if(s_copy[i] == c && g_found == 1) {
                ans = max(ans, g_loc - i);
            }
        }
        
        cout << ans << "\n";
    }
}