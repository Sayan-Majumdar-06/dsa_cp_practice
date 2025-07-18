// Problem : Swap and Delete(CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1913/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        int ans = 0;
        
        int z_count = 0, o_count = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                z_count++;
            } else {
                o_count++;
            }
        }

        int t_count = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0' && o_count > 0) {
                o_count--;
                t_count++;
            } else if(s[i] == '1' && z_count > 0) {
                z_count--;
                t_count++;
            } else {
                break;
            }
        }
        
        ans = s.length() - t_count;
        cout << ans << "\n";
    }
}