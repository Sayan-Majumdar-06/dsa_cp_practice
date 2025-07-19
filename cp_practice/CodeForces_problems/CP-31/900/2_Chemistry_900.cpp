// Problem : Chemistry(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/contest/1883/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int count[26] = {0};
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        for(int i = 0; i < n; i++) {
            count[s.at(i) - 'a']++;
        }
        
        int temp = 0;
        
        for(int i = 0; i < 26; i++) {
            if(count[i] % 2 != 0) {
                temp++;
            }
        }
        
        if(temp <= k+1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}