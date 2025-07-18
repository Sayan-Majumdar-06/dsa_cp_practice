// Problem : Unit Array(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1834/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int count_plus = 0, count_minus = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > 0) {
                count_plus++;
            } else {
                count_minus++;
            }
        }
        
        int ans = 0;
        
        while(!((count_plus >= count_minus) && (count_minus % 2 == 0))) {
            count_plus++;
            count_minus--;
            ans++;
        }
        
        cout << ans << "\n";
    }
}