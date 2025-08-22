// Problem : Multiply by 2, Divide by 6 (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1374/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        int q = n;
        long long count = 0;
        
        while(q % 6 == 0) {
            q = q / 6; 
            count++;
        }
        
        if(q != 1) {
            while(q % 3 == 0) {
                q = q / 3;
                count += 2;
            }
        }
        
        if(q == 1) {
            cout << count << "\n";
        } else {
            cout << -1 << "\n";
        }
        
    }
}