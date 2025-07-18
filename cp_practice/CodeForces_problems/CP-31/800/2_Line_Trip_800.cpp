#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<int> ans;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> stn(n);
        for(int i = 0; i < n; i++){
            cin >> stn[i];
        }
        
        int first = stn[0] - 0;
        int second = 2 * (x - stn[n-1]);
        
        int third = 0;
        
        for(int i = 1; i < n; i++) {
            if(stn[i] - stn[i-1] > third) {
                third = stn[i] - stn[i-1];
            }
        }
        
        int answer = max(first, second);
        answer = max(answer, third);
        
        ans.push_back(answer);
    }
    
    for(int x : ans) {
        cout << x << "\n";
    }
}