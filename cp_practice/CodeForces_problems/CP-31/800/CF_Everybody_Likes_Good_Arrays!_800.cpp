// Problem : Everybody Likes Good Arrays!(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1777/A

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
        
        int count = 0;
        
        for(int i = 0; i < n-1; i++) {
            if((a[i]%2 == 0 && a[i+1]%2 == 0) || (a[i]%2 != 0 && a[i+1]%2 != 0)) {
                count++;
            }
        }
        
        cout << count << "\n";
    }
}