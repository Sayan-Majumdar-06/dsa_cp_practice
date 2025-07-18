// Problem : D (upsolved)
// Link : https://codeforces.com/contest/2126/problem/D

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> a(n, vector<int> (3));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }
        sort(a.begin(), a.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });
        
        for(int i = 0; i < n; i++) {
            if(a[i][0] <= k && a[i][1] >= k && a[i][2] >= k) {
                k = a[i][2];
            }
        }
        
        cout << k << "\n";
    }
}