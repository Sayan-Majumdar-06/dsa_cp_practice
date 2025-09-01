// Problem : Shoe Shuffling (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1691/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<long long> s(n);
        map<long long, int> hash;
        
        int temp = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> s[i];
            hash[s[i]]++;
        }
        
        
        for(int i = 0; i < n; i++) {
            if(hash[s[i]] < 2) {
                temp = 1;
                break;
            }
        }
        
        if(temp == 1) {
            cout << -1 << "\n";
        } else {
            for(int i = 0; i < n;) {
                int max_upto = i + hash[s[i]];
                
                if(hash[s[i]] % 2 == 0) {
                    while(max_upto > i) {
                        cout << max_upto << " ";
                        max_upto--;
                    }
                } else {
                    cout << max_upto << " ";
                    for(int j = i+1; j < max_upto; j++) {
                        cout << j << " ";
                    }
                }
                i += hash[s[i]];
            }
            
            cout << "\n";
        }
    }
}