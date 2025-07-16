// Problem : One and Two(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1788/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int num_2 = 0;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 2) {
                num_2++;
            }
        }
        
        if(num_2 % 2 != 0) {
            cout << "-1\n";
        } else {
            int ans = 0;
            int half_num = num_2 / 2;
                
            if(half_num != 0) {
                for(int i = 0; i < n; i++) {
                    if(half_num == 0) {
                        ans = i;
                        break;
                    } else {
                        if(a[i] == 2) {
                            half_num--;
                        }
                    }
                }
            } else {
                ans = 1;
            }
            
            cout << ans << "\n";
        }
    }
}