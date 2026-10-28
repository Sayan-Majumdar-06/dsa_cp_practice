// GeeksforGeeks problem : Fractional Knapsack
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
// Approach : Greedy, sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<pair<int, int>> a(n);
        
        for(int i = 0; i < n; i++) {
            a[i] = {wt[i], val[i]};
        }
        
        sort(a.begin(), a.end(), [](const auto& a1, const auto& a2){
            return (double)(a1.second*1.0 / a1.first) > (double)(a2.second*1.0/a2.first);
        });
        
        double wt_sum = 0, val_sum = 0;
        
        for(int i = 0; i < n; i++) {
            if(wt_sum == capacity) break;
            
            if(wt_sum + a[i].first <= capacity) {
                val_sum += a[i].second;
                wt_sum += a[i].first;
            }
            
            else {
                double fr = (capacity - wt_sum)*1.0 / a[i].first;
                val_sum += (fr * a[i].second);
                wt_sum += (fr * a[i].first);
            }
        }
        
        return val_sum;
    }
};
