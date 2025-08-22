// Problem : Forked !(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1904/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        
        int x_k, y_k, x_q, y_q;
        cin >> x_k >> y_k >> x_q >> y_q;
        
        set<pair<int, int>> coords_k;
        
        coords_k.insert({x_k - a, y_k + b});
        coords_k.insert({x_k - a, y_k - b});
        coords_k.insert({x_k + a, y_k + b});
        coords_k.insert({x_k + a, y_k - b});
        coords_k.insert({x_k - b, y_k + a});
        coords_k.insert({x_k - b, y_k - a});
        coords_k.insert({x_k + b, y_k + a});
        coords_k.insert({x_k + b, y_k - a});
        
        set<pair<int, int>> coords_q;
        
        coords_q.insert({x_q - a, y_q + b});
        coords_q.insert({x_q - a, y_q - b});
        coords_q.insert({x_q + a, y_q + b});
        coords_q.insert({x_q + a, y_q - b});
        coords_q.insert({x_q - b, y_q + a});
        coords_q.insert({x_q - b, y_q - a});
        coords_q.insert({x_q + b, y_q + a});
        coords_q.insert({x_q + b, y_q - a});
        
        int count = 0;
        
        for(auto i : coords_k) {
            for(auto j : coords_q) {
                if(i == j) {
                    count++;
                }
            }
        }
        
        cout << count << "\n";
    }
}