// Problem : Ambitious Kid(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1866/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    int diff = 100000;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        int temp = abs(arr[i] - 0);
        if(temp < diff) {
            diff = temp;
        }
    }
    
    cout << diff << endl;
    
    
}