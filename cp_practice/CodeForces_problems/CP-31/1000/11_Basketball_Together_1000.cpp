// Problem : Basketball Together (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1725/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, d;
    cin >> n >> d;
    
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    int count = 0;
    int total = 0;
    
    for(int i = n - 1; i >= 0; i--) {
        int team_count = 1;

        while(a[i] * team_count <= d) {
            team_count++;
        }
        
        total += team_count;
        
        if(total <= n) {
            count++;
        } else if(total > n) {
            break;
        }
    }

    cout << count << "\n";
}
