// Leetcode Problem : Find a peak element II
// Difficulty : Medium
// Link : https://leetcode.com/problems/find-a-peak-element-ii/
// Approach : Binary search on 2D array

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
private:
    int maxCol(vector<int>& a) {
        int idx = -1;
        int maxi = INT_MIN;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] > maxi) {
                idx = i;
                maxi = a[i];
            }
        }
        return idx;
    }

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int l = 0, r = n-1;

        while(l <= r) {
            int mid = l + (r-l) / 2;

            int ele_col = maxCol(mat[mid]);
            int ele = mat[mid][ele_col];

            int top = (mid > 0)? mat[mid-1][ele_col] : -1;
            int bottom = (mid < n-1)? mat[mid+1][ele_col] : -1;

            if(ele > top && ele > bottom) {
                return {mid, ele_col};
            }  

            else if(ele < top) {
                r = mid-1;
            }      
            
            else {
                l = mid+1;
            }
        }

        return {-1, -1};
    }
};