// Leetcode problem : Single Number - I
// Difficulty : Easy
// Link : https://leetcode.com/problems/single-number/
// Approach : Bit property

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = nums[0];

        for(int i = 1; i < nums.size(); i++) x ^= nums[i];

        return x;
    }
};