// Problem : Make AP (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1624/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        //multiplication to a
        if(((2*b - c) % a == 0)&&((2*b - c) / a > 0)) {
            cout << "YES\n";
        } 
        
        //multiplication to b
        else if(((a + c) % (2*b) == 0)&&((a + c) / (2*b) > 0)){
            cout << "YES\n";
        }
        
        //multiplication to c
        else if(((2*b - a) % c == 0)&&((2*b - a) / c > 0)){
            cout << "YES\n";
        } 
        
        else {
            cout << "NO\n";
        }
    }
}