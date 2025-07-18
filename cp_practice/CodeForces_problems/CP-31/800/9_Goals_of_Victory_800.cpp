// Problem : greedy(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1877/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n-1);
        int answer = 0;
        
        for(int i = 0; i < n-1; i++) {
            cin >> arr[i];
            answer += arr[i];
        }
        
        answer *= (-1);
        
        cout << answer << "\n";
    }
}