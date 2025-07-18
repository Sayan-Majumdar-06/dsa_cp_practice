// Problem : Extremely Round(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1766/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        if(n == 1) {
            cout << "1\n";
        } else {
            int count = 0;
            int dig = 0;
            
            int i = 1;
            while(n > i) {
                if(n > i) {
                    i *= 10;
                    dig++;
                }
            }
            
            if(i > 1) {
                count += (n/(i/10));
            }
            
            
            
            for(int j = 1; j < dig; j++) {
                count += 9;
            }
            
            cout << count << "\n";
        }
    }
}