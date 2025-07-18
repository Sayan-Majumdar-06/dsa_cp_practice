// Problem : Jagged Swaps(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1896/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<int> copy = arr;
        sort(copy.begin(), copy.end());
        
        for(int j = 0; j < n; j++) {    
            for(int i = 1; i < n - 1; i++) {
                if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])) {
                    swap(arr[i], arr[i+1]);
                }
            }
        }
        
        if(arr == copy) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}