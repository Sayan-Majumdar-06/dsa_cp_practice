// Problem : Game with Integers(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1899/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        if(n % 3 == 0) {
            cout << "Second\n";
        } else {
            cout << "First\n";
        }
    }
}