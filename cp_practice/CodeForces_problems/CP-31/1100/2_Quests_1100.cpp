// Problem : Quests(CodeForces)
// Rating : 1100
// Problem link : https://codeforces.com/problemset/problem/1914/C

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
        
        vector<int> a(n), b(n);
        vector<int> max_upto(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int temp_max = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            if(b[i] > temp_max) {
                temp_max = b[i];
            }
            
            max_upto[i] = temp_max;
        }
        
        vector<long long> ans;
        int temp = 0;
        
        for(int i = 0; i < n; i++) {
            temp += a[i];
            
            if(i + 1 > k) {
                break;
            }
            
            int maxi = 0;
            
            if(i + 1 == k) {
                maxi = 0;
            } else {
                maxi = (k-(i+1)) *  max_upto[i];
            }
            
            ans.push_back(temp + maxi);
        }
        
        cout << *max_element(ans.begin(), ans.end()) << "\n";
    }
}