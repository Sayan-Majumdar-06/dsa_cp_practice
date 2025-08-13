// Problem : A 
// Link : https://codeforces.com/contest/2125/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        string s_copy = "";
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'T') {
                s_copy.push_back(s[i]);
            }
        }
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != 'T') {
                s_copy.push_back(s[i]);
            }
        }
    
        cout << s_copy << "\n";
    }
}