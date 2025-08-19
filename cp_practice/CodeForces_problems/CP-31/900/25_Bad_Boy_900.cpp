// Problem : Bad Boy (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1537/B

// Original Approach :

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
    
//     while(t--) {
//         long long n, m, i, j;
//         cin >> n >> m >> i >> j;
        
//         long long x_1, x_2, y_1, y_2;
        
//         vector<pair<long long, long long>> c = {{1,1}, {1,m}, {n,1}, {n,m}};
//         long long maximum = -1;
//         int f_pos = -1;
        
//         for(int k = 0; k < 4; k++) {
//             long long temp = abs(c[k].first - i);
//             temp += abs(c[k].second - j);
            
//             if(temp > maximum) {
//                 x_1 = c[k].first;
//                 y_1 = c[k].second;
//                 maximum = temp;
//                 f_pos = k;
//             }
//         }
        
//         if(f_pos == 0) {
//             if(i != n && j != m) {
//                 x_2 = c[3].first;
//                 y_2 = c[3].second;
//             }
//             else {
//                 if(i == n) {
//                     x_2 = 1, y_2 = m;
//                 } else {
//                     x_2 = n, y_2 = 1;
//                 }
//             }
//         }
        
//         if(f_pos == 1) {
//             if(i != n && j != 1) {
//                 x_2 = c[2].first;
//                 y_2 = c[2].second;
//             }
//             else {
//                 if(i == n) {
//                     x_2 = 1, y_2 = 1;
//                 } else {
//                     x_2 = n, y_2 = m;
//                 }
//             }
//         }
        
//         if(f_pos == 2) {
//             if(i != 1 && j != m) {
//                 x_2 = c[1].first;
//                 y_2 = c[1].second;
//             }
//             else {
//                 if(i == 1) {
//                     x_2 = n, y_2 = m;
//                 } else {
//                     x_2 = 1, y_2 = 1;
//                 }
//             }
//         }
        
//         if(f_pos == 3) {
//             if(i != 1 && j != 1) {
//                 x_2 = c[0].first;
//                 y_2 = c[0].second;
//             }
//             else {
//                 if(i == 1) {
//                     x_2 = n, y_2 = 1;
//                 } else {
//                     x_2 = 1, y_2 = m;
//                 }
//             }
//         }
        
//         cout << x_1 << " " << y_1 << " " << x_2 << " " << y_2 << "\n";
//     }
// }

// Better/Most optimal :

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        
        cout << 1 << " " << 1 << " " << n << " " << m << "\n";
    }
}