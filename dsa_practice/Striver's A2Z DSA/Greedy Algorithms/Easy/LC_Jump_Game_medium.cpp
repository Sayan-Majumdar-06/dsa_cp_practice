// Leetcode problem : Jump Game
// Difficulty : Easy
// Link : https://leetcode.com/problems/jump-game
// Approach : Greedy

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        int target = n-1;

        for(int i = n-2; i >= 0; i--) {
            if(nums[i] + i >= target) {
                target = i;
            }
        }

        return (target == 0);
    }
};