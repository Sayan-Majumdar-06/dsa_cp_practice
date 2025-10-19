// Leetcode Problem : Missing Number
// Difficulty : Easy
// Link : https://leetcode.com/problems/missing-number/
// Approach 1 : STL sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mex = 0;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == mex) {
                mex++;
            }
        }

        return mex;
    }
};

// Approach 2 : math

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int max_sum = n * (n+1) / 2;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        return (max_sum - sum);
    }
};