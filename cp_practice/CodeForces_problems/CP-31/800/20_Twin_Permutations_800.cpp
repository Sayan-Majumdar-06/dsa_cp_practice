// Problem : Twin Permutations(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1831/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int max_ele = *max_element(a.begin(), a.end());
        int req_sum = max_ele + 1;
        
        vector<int> b(n);
        
        for(int i = 0; i < n; i++) {
            b[i] = req_sum - a[i];
        }
        
        for(int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}