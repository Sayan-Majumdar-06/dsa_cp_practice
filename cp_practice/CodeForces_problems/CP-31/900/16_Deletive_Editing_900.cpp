// Problem : Deletive Editing (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1666/D

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    while(n--) {
        string s, t;
        cin >> s >> t;
        
        vector<int> freq(26, 0);
        for(int i = 0; i < t.size(); i++) {
            freq[t[i] - 'A']++;
        }
        
        for(int i = 0; i < s.length();) {
            if(freq[s[i] - 'A'] == 0) {
                s.erase(s.begin() + i);
                if(i == 0) {
                    i = 0;
                }
            } else {
                i++;
            }
        }
        
        set<char> t_set;
        for(auto i : t) {
            t_set.insert(i);
        }
        
        auto it = t_set.begin();
        
        for(int i = 0; i < t_set.size(); i++) {
            for(int j = s.length()-1; j >= 0; j--) {
                if(s[j] == *(next(it, i))) {
                    if(freq[*(next(it, i)) - 'A'] > 0) {
                        freq[*(next(it, i)) - 'A']--;
                    } else {
                        s.erase(s.begin() + j);
                    }
                }
            }
        }
        
        if(s == t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}