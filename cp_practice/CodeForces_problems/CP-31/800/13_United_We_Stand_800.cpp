// Problem : United We Stand(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1859/A

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

        int max_val = *max_element(a.begin(), a.end());
        vector<int> b;
        vector<int> c;

        for(int i = 0; i < n; i++) {
            if(a[i] == max_val) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }
        
        if(b.empty() || c.empty()) {
            cout << "-1\n";
        } else {
            cout << b.size() << " " << c.size() << "\n";
            for(int x : b) {
                cout << x << " ";
            }

            cout << "\n";
            
            for(int y : c) {
                cout << y << " ";
            }
            
            cout << "\n";
        }
        
    }
}