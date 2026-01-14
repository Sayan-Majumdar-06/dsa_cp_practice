// GeeksforGeeks Problem : Row with max 1s
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1
// Approach : Binary Search on 2D array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        
        int ans = 0;
        int idx = -1;
        
        for(int i = 0; i < n; i++) {
            int l = 0, r = m-1;
            
            while(l <= r) {
                int mid = l + (r-l)/2;
                
                if(arr[i][mid] == 0) {
                    l = mid+1;
                } else {
                    r = mid-1;
                }
            }
            
            int cntOf1s = (m-r-1);
            
            if(cntOf1s > ans) {
                ans = cntOf1s;
                idx = i;
            }
        }
        
        return idx;
    }
};