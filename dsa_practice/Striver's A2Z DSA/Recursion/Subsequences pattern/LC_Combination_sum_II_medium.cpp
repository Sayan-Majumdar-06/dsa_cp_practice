// Leetcode Problem : Combination Sum II
// Difficulty : Medium
// Link : https://leetcode.com/problems/combination-sum-ii/
// Approach : Recursion - combination

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    void helper(int idx, int sum, int target, vector<int>& arr, vector<int>& candidates, int n, vector<vector<int>>& ans) {
    
        if(sum == target) {
            ans.push_back(arr);
            return;
        }

        if(sum > target) return;

        for(int i = idx; i < n; i++) {
            if(i > idx && candidates[i] == candidates[i-1]) continue;

            arr.push_back(candidates[i]);
            helper(i+1, sum+candidates[i], target, arr, candidates, n, ans);

            arr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;

        sort(candidates.begin(), candidates.end());
        helper(0, 0, target, arr, candidates, candidates.size(), ans);

        return ans;
    }
};