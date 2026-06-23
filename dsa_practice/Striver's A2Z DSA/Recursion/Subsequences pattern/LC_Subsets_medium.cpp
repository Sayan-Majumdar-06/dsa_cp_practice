// Leetcode Problem : Subsets
// Difficulty : Medium
// Link : https://leetcode.com/problems/subsets/
// Approach : Recursion - take/not take

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void helper(int idx, int n, vector<int>& arr, vector<int>& nums, vector<vector<int>>& ans) {
        if(idx == n) {
            ans.push_back(arr);
            return;
        }

        // take
        arr.push_back(nums[idx]);
        helper(idx+1, n, arr, nums, ans);

        arr.pop_back();

        // not take
        helper(idx+1, n, arr, nums, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;

        helper(0, nums.size(), arr, nums, ans);

        return ans;
    }
};