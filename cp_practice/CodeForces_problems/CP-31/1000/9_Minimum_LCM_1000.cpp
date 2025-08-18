// Problem : Minimum LCM (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1765/M

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
        
        long long a = 0, b = 0;
        
        if(n % 2 == 0) {
            a = n / 2;
            b = n / 2;
        } 
        
        else {
            a = 1;
            
            for(int i = 2; i <= sqrt(n); i++) {
                if(n % i == 0) {
                    a = n / i;
                    break;
                }
            }  
            
            b = n - a;
        }
        
        cout << a << " " << b << "\n";
    }
}