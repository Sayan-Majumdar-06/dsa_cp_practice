// Problem : Monsters (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/contest/1849/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n, k;
        cin >> n >> k;
        
        vector<pair<long long, long long>> a(n);
        
        for(int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            
            a[i] = {i+1, temp};
        }
        
        for(int i = 0; i < n; i++) {
            if(a[i].second % k == 0) {
                a[i].second = k;
            } else {
                a[i].second = a[i].second % k;
            }
        }
        
        sort(a.begin(), a.end(), [&] (pair<long long, long long> a, pair<long long, long long> b) {
            if (a.second != b.second) {
                return a.second > b.second;
            }
            
            return a.first < b.first;
        });
        
        for(int i = 0; i < n; i++) {
            cout << a[i].first << " ";
        }
        
        cout << "\n";
        
    }
}