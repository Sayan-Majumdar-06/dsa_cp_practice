// Problem : Walking Master(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1806/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if(b > d) {
            cout << "-1\n";
        } 
        
        else if (b < d) {
            if(a + (d-b) == c) {
                cout << d-b << "\n";
            } else if(a + (d-b) < c) {
                cout << "-1\n";
            } else if(a + (d-b) > c) {
                cout << (d-b)+(a+(d-b)-c) << "\n";
            }
        } 
        
        else {
            if(c > a) {
                cout << "-1\n";
            } else {
                cout << a-c << "\n";
            }
        }
    }
}