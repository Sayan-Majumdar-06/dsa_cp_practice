// Problem : We Need the Zero (CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1805/A

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int temp = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            temp = temp ^ a[i];
        }
        
        int ans = 0;
        
        if(a.size() % 2 == 0 && temp != 0) {
            cout << "-1\n";
        } else {
            cout << temp << "\n";
        }
    }
}