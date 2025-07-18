// Problem : C (upsolved)
// Link : https://codeforces.com/contest/2126/problem/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        k = k-1;
        
        vector<int> h(n);
        for(int i = 0; i < n; i++) {
            cin >> h[i];
        }
        
        vector<int> larger;
        for(int x : h) {
            if(x > h[k]) {
                larger.push_back(x);
            }
        }
        
        sort(larger.begin(), larger.end());
        
        int temp = 0;
        
        for(int i = 0; i < larger.size(); i++) {
            if(larger[i] - h[k] <= h[k]) {
                h[k] = larger[i];
            } 
            
            if(h[k] == *max_element(larger.begin(), larger.end())) {
                temp = 1;
                break;
            }
        }
        
        if(temp == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
}