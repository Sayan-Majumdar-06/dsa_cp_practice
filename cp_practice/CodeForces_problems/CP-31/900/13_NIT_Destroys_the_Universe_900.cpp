// Problem : NIT Destroys the Universe(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1696/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int count = 0;
        int temp = 0;
        
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                if(temp == 1) {
                    count++;
                    temp = 0;
                }
            } else if(a[i] != 0) {
                temp = 1;
                if(i == n-1) {
                    count++;
                }
            }
        }
        
        if(count > 2) {
            count = 2;
        }
        cout << count << "\n";
    }
}