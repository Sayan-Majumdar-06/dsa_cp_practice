// Leetcode Problem : Combination Sum III
// Difficulty : Medium
// Link : https://leetcode.com/problems/combination-sum-iii/
// Approach : Recursion (take/not take)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void helper(vector<int>& nums, int idx, int sum, int k, int n, vector<int>& arr, vector<vector<int>>& ans) {
        if(arr.size() == k) {
            if(sum == n) ans.push_back(arr);
            return;
        }

        if(idx == nums.size()) return;

        arr.push_back(nums[idx]);
        helper(nums, idx+1, sum+nums[idx], k, n, arr, ans);

        arr.pop_back();
        helper(nums, idx+1, sum, k, n, arr, ans);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        helper(nums, 0, 0, k, n, arr, ans);

        return ans;
    }
};