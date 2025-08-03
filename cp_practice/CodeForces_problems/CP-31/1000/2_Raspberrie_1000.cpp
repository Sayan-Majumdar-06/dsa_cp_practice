// Problem : Raspberries (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1883/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int min_count = k;
        
        for(auto i : a) {
            int count = 0;
            if(i % k != 0) {
                count = k - (i % k);
            }
            if(count < min_count) {
                min_count = count;
            }
            min_count = min(min_count, count);
        }
            
        if(k == 4) {
            int even_c = 0;
            for(auto i : a) {
                if(i % 2 == 0) {
                    even_c++;
                }
            }
            
            if(even_c >= 2) {
                min_count = 0;
            } else if(even_c == 1) {
                if(min_count >= 1){
                    min_count = 1;
                }
            } else if(even_c == 0) {
                if(min_count >= 2){
                    min_count = 2;
                }
            }
        }
        
        cout << min_count << "\n";
    }
}