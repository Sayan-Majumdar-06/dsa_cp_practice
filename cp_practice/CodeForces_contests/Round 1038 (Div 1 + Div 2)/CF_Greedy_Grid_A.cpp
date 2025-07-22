// Problem : A 
// Link : https://codeforces.com/contest/2122/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        if((n > 2 || m > 2) && (n > 1 && m > 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}