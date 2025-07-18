// LeetCode Problem : Single Number
// Difficulty : Easy
// Link : https://leetcode.com/problems/single-number
// Approach : bitwise XOR

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNumber = 0;
        for(int i = 0; i < nums.size(); i++) {
            singleNumber = singleNumber ^ nums[i];
        }
        return singleNumber;
    }
};