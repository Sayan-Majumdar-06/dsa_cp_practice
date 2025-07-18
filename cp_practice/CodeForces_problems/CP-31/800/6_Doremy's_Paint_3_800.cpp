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
        
        if(n == 2) {
            cout << "YES\n";
        } else {
            int first = arr[0];
            int second = 0;
            int first_count = 1;
            
            for(int i = 1; i < n; i++) {
                if(arr[i] == first) {
                    first_count++;
                } else {
                    second = arr[i];
                }
            }
            
            int second_count = 0;
            
            for(int i = 0; i < n; i++) {
                if(arr[i] == second) {
                    second_count++;
                }
            }
            
            if(first_count == n || second_count == n) {
                cout << "YES\n";
            }
            else if((first_count == n/2 || second_count == n/2) && (first_count + second_count == n)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}