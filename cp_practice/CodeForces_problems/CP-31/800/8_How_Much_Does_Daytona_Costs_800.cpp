// Problem : How Much Does Daytona Cost?(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1878/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        string x;
        cin >> x;
        
        string s;
        cin >> s;
        
        int count = 0;
        
        while(x.find(s) == -1 && x.size() <= 25) {
            x += x;
            count++;
        }
        
        if(x.find(s) != -1) {
            cout << count << "\n";
        } else {
            cout << "-1\n";
        }
    }
}