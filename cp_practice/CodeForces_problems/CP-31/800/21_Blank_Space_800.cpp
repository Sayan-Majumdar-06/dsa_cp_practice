// Problem : Blank Space(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1829/B

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
        
        int ans = 0;
        
        vector<int> blank;
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                count++;
            } else {
                blank.push_back(count);
                count = 0;
            }
        }
        
        blank.push_back(count);
    
        if(n == 1) {
            if(a[0] == 0) {
                ans = 1;
            } else {
                ans = 0;
            }
        } else {
            ans = *max_element(blank.begin(), blank.end());
        }
        
        cout << ans << "\n";
    }
}