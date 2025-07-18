// Problem : Forbidden Integer(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1845/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        if(x != 1) {
            cout << "YES\n" << n << "\n";
            
            for(int i = 1; i <= n; i++) {
                cout << 1 << " ";
            }
            
            cout << "\n";
        } else {
            if(k == 1) {
                cout << "NO\n";
            } else if (k == 2) {
                if(n % 2 == 0) {
                    cout << "YES\n" << n/2 << "\n";
                    for(int i = 0; i < n/2; i++) {
                        cout << "2 ";
                    }
                    cout << "\n";
                } else {
                    cout << "NO\n";
                }
            } else {
                cout << "YES\n";
                
                if(n%2 == 0) {
                    cout << n/2 << "\n";
                    for(int i = 0; i < n/2; i++) {
                        cout << "2 ";
                    }
                    cout << "\n";
                } else {
                    cout << (n-1)/2 << "\n";
                    for(int i = 0; i < ((n-3)/2); i++) {
                        cout << "2 ";
                    }
                    cout << "3\n";
                }
            }
        }
    }
}