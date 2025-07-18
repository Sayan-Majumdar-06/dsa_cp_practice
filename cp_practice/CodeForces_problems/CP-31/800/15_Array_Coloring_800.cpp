// Problem : Array Coloring(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1857/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        
        if(sum % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
}