// Leetcode Problem : Combination Sum
// Difficulty : Medium
// Link : https://leetcode.com/problems/combination-sum/
// Approach : Recursion - take/not take

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void combinationArr(int idx, vector<vector<int>>& ans, vector<int>& arr, vector<int>& candidates, int sum, int target, int n) {
        if(sum == target) {
            ans.push_back(arr);
            return;
        }

        else if(idx >= n || sum > target) {
            return;
        }

        // take
        arr.push_back(candidates[idx]);
        combinationArr(idx, ans, arr, candidates, sum+candidates[idx], target, n);

        arr.pop_back();

        // not take
        combinationArr(idx+1, ans, arr, candidates, sum, target, n);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;

        combinationArr(0, ans, arr, candidates, 0, target, candidates.size());

        return ans;
    }
};