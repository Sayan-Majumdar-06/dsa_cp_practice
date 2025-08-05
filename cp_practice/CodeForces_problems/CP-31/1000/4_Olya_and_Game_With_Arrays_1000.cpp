// Problem : Olya and Game with Arrays (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/contest/1859/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<long long> second_min(n);
        long long lowest = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            int m_i;
            cin >> m_i;
            
            vector<long long> a(m_i);
        
            for(int j = 0; j < m_i; j++) {
                cin >> a[j];
            }
            
            sort(a.begin(), a.end());
            
            lowest = min(lowest, a[0]);
            second_min[i] = a[1];
        }
        
        long long sum = 0;
        sort(second_min.begin(), second_min.end());
        
        for(int i = 1; i < n; i++) {
            sum += second_min[i];
        }
        
        long long ans = lowest + sum;
        
        cout << ans << "\n";
    }
}