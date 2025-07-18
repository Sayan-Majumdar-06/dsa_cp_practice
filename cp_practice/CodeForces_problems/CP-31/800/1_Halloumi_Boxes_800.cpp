

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<string> ans;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<long long int> arr(n);
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<long long int> copy = arr;
        sort(copy.begin(), copy.end());
        
        if(copy != arr && k < 2) {
            ans.push_back("NO");
        } else {
            ans.push_back("YES");
        }
    }
    
    for(string x : ans) {
        cout << x << "\n";
    }
    
}