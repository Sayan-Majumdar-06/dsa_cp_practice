// Problem : Make it Beautiful(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1783/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int maximum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] >= a[maximum]){
                maximum = i;
            }
        }
        
        swap(a[0], a[maximum]);
        
        if(a[0] == a[1]) {
            for(int i = 0; i < n; i++) {
                if(a[i] != a[0]) {
                    swap(a[i], a[0]);
                    break;
                }
            }
        }
        
        if(a[1] == a[0]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            
            for(int x : a) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
}