// Problem : Triangles on a rectangle (CodeForces)
// Rating : 1000
// Problem link : https://codeforces.com/problemset/problem/1620/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int w, h;
        cin >> w >> h;

        long long max_area = LLONG_MIN;
        long long area_twice = 0;

        int k_y0;
        cin >> k_y0;

        vector<int> x_y0(k_y0);
        for(int i = 0; i < k_y0; i++) {
            cin >> x_y0[i];
        }

        area_twice = (*max_element(x_y0.begin(), x_y0.end()) - *min_element(x_y0.begin(), x_y0.end())) * (long long)(h);
        max_area = max(max_area, area_twice);

        int k_yh;
        cin >> k_yh;

        vector<int> x_yh(k_yh);
        for(int i = 0; i < k_yh; i++) {
            cin >> x_yh[i];
        }

        area_twice = (*max_element(x_yh.begin(), x_yh.end()) - *min_element(x_yh.begin(), x_yh.end())) * (long long)(h);
        max_area = max(max_area, area_twice);

        int k_x0;
        cin >> k_x0;

        vector<int> x_x0(k_x0);
        for(int i = 0; i < k_x0; i++) {
            cin >> x_x0[i];
        }

        area_twice = (*max_element(x_x0.begin(), x_x0.end()) - *min_element(x_x0.begin(), x_x0.end())) * (long long)(w);
        max_area = max(max_area, area_twice);

        int k_xw;
        cin >> k_xw;

        vector<int> x_xw(k_xw);
        for(int i = 0; i < k_xw; i++) {
            cin >> x_xw[i];
        }   
        
        area_twice = (*max_element(x_xw.begin(), x_xw.end()) - *min_element(x_xw.begin(), x_xw.end())) * (long long)(w);
        max_area = max(max_area, area_twice);
        
        cout << max_area << "\n";
    }
}