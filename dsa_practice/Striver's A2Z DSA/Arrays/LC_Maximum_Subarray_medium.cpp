// Leetcode Problem : Maximum Subarray
// Difficulty : Medium
// Link : https://leetcode.com/problems/maximum-subarray/description/
// Approach 1 : Kadane's Algorithm

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN, sum = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];

            if(sum < 0) {
                sum = 0;
            } else {
                maxi = max(maxi, sum);
            }
        }

        if(maxi < 0) {
            maxi = *max_element(nums.begin(), nums.end());
        }
        return maxi;
    }
};