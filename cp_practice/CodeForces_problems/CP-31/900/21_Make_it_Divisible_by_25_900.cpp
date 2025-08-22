// Problem : Make it Divisible by 25 (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1593/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        //25
        long long n_copy = n;
        int count_25 = 0;
        while(n_copy % 10 != 5 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_25++;
        }
        n_copy = n_copy / 10;
        while(n_copy % 10 != 2 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_25++;
        }
        
        //50
        n_copy = n;
        int count_50 = 0;
        while(n_copy % 10 != 0 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_50++;
        }
        n_copy = n_copy / 10;
        while(n_copy % 10 != 5 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_50++;
        }
        
        //75
        n_copy = n;
        int count_75 = 0;
        while(n_copy % 10 != 5 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_75++;
        }
        n_copy = n_copy / 10;
        while(n_copy % 10 != 7 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_75++;
        }
        
        //00
        n_copy = n;
        int count_00 = 0;
        while(n_copy % 10 != 0 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_00++;
        }
        n_copy = n_copy / 10;
        while(n_copy % 10 != 0 && n_copy > 0) {
            n_copy = n_copy / 10;
            count_00++;
        }
        
        int count = min(count_25, count_50);
        count = min(count, count_75);
        count = min(count, count_00);
        
        cout << count << "\n";
    }
}