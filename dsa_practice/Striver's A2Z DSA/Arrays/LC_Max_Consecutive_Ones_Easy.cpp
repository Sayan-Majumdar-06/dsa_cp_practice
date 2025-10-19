// Leetcode Problem : Max Consecutive Ones
// Difficulty : Easy
// Link : https://leetcode.com/problems/max-consecutive-ones/description/
// Approach : (Optimal)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
            } else {
                ans = max(count, ans);
                count = 0;
            }
        }

        ans = max(ans, count);

        return ans;
    }
};
