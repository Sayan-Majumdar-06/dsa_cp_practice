// Leetcode Problem : Merge Intervals
// Difficulty : Medium
// Link : https://leetcode.com/problems/merge-intervals/
// Approach : Optimal (TC -> O(NlogN + N); SC -> O(N) (for ans array, otherwise O(1)))

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            if(ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            } else {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }
        }

        return ans;
    }
};