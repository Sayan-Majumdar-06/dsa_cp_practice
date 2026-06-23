// Leetcode Problem : Subsets II
// Difficulty : Medium
// Link : https://leetcode.com/problems/subsets-ii/
// Approach : Recursion - combination

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    void helper(int idx, int n, vector<int>& arr, vector<int>& nums, vector<vector<int>>& ans) {
    
        ans.push_back(arr);

        for(int i = idx; i < n; i++) {
            if(i > idx && nums[i] == nums[i-1]) continue;

            arr.push_back(nums[i]);
            helper(i+1, n, arr, nums, ans);

            arr.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;

        sort(nums.begin(), nums.end());

        helper(0, nums.size(), arr, nums, ans);

        return ans;
    }
};