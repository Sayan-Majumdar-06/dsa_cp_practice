// Problem : Three Activities(CodeForces)
// Rating : 1200
// Problem link : https://codeforces.com/problemset/problem/1914/D

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) {
            int temp = 0;
            cin >> temp;
            
            a[i] = {temp, i};
        }
        
        vector<pair<int, int>> b(n);
        for(int i = 0; i < n; i++) {
            int temp = 0;
            cin >> temp;
            
            b[i] = {temp, i};
        }
        
        vector<pair<int, int>> c(n);
        for(int i = 0; i < n; i++) {
            int temp = 0;
            cin >> temp;
            
            c[i] = {temp, i};
        }
       
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        
        int max_sum = 0;
        
        for(int i = n-3; i < n ; i++) {
            for(int j = n-3; j < n; j++) {
                for(int k = n-3; k < n; k++) {
                    if(a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second) {
                        int sum = a[i].first + b[j].first + c[k].first;
                        max_sum = max(sum, max_sum);
                    }
                }
            }
        }
        
        cout << max_sum << "\n";
        
    }
}