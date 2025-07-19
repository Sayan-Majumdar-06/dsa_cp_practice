// Problem : Longest Divisors Interval(CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1855/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        long long count = 0;
        
        long long i = 1;
        while(n % i == 0) {
            count++;
            i++;
        }
        
        cout << count << "\n";
    }
    
    
}