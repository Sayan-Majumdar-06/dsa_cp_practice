// Problem : Red Versus Blue (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1659/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, r, b;
        cin >> n >> r >> b;
        
        int max_streak = r / (b + 1);
        
        string s;
        
        for(int i = 0; i < n - max_streak;) {
            for(int j = 0; j < max_streak; j++) {
                if(r > 0) {
                    s.push_back('R');
                    r--;
                }
            }
            
            if(b > 0) {
                s.push_back('B');
                b--;
            }
            
            if(b == 0) {
                break;
            }
            
            i += max_streak + 1;
        }
        
        if(s.size() < n) {
            for(int j = 0; j < max_streak; j++) {
                if(r > 0) {
                    s.push_back('R');
                    r--;
                }
            }
        }
        
        int i = 0;
        
        while(s.size() < n) {
            s.insert(s.begin() + max_streak + i, 'R');
            r--;
            i += max_streak + 2;
            
            if(r == 0 || s.size() == n) {
                break;
            }
        }
    
        cout << s << "\n";
    }
}