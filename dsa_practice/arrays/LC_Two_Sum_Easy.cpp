// LeetCode Problem : Two Sum
// Difficulty : Easy
// Link : https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            if(nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                break;
            } else if(nums[i] + nums[j] > target) {
                j--;
            } else if(nums[i] + nums[j] < target){
                i++;
            }
        }

        return ans;
    }
};