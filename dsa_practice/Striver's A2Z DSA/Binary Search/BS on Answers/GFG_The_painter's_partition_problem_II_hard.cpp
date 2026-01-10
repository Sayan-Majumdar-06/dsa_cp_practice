// GeeksforGeeks Problem : The Painter's Partition Problem II
// Difficulty : Hard
// Link : https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/0
// Approach : Binary Search on Answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    private:
        bool canAllot(vector<int>& a, int max_time, int k) {
            int sum = a[0];
            int painter_cnt = 0;
            
            for(int i = 1; i < a.size(); i++) {
                if(sum + a[i] <= max_time) {
                    sum += a[i];
                } else {
                    painter_cnt++;
                    sum = a[i];
                }
            }
            
            if(sum <= max_time) {
                painter_cnt++;
            }
            
            return (painter_cnt <= k);
        }
        
  public:
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();
        
        int sum = 0;
        for(int i = 0; i < n; i++) sum+= arr[i];
        
        int l = *max_element(arr.begin(), arr.end());
        int r = sum;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(canAllot(arr, mid, k)) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return l;
    }
};