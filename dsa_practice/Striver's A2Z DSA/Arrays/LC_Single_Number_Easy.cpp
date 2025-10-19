// Leetcode Problem : Single Number
// Difficulty : Easy
// Link : https://leetcode.com/problems/single-number/
// Approach : (Optimal) Bitwise operators

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNumber = 0;

        for(auto i : nums) {
            singleNumber = singleNumber ^ i;
        }

        return singleNumber;
    }
};