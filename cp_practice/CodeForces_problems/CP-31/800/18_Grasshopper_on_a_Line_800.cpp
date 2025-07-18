// Problem : Grasshopper on a Line(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1837/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int x, k;
        cin >> x >> k;
        
        int step = x;
        
        while(step % k == 0) {
            step--;
        }
        
        int count = 1;
        
        if((x - step) > 0) {
            count++;
        }
        
        cout << count << "\n" << step << " ";
        if(x-step > 0) {
            cout << x-step;
        }
        cout << "\n";
    }
}