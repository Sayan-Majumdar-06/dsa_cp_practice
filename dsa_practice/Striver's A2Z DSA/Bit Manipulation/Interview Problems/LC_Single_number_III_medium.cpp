// Leetcode problem : Single Number - III
// Difficulty : Easy
// Link : https://leetcode.com/problems/single-number-iii/
// Approach : Bit property

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long x = 0;

        for(int i: nums) x ^= i;

        long long first_set_bit = x & (-x);

        int a = 0, b = 0;

        for(int i: nums) {
            if(i & first_set_bit) a ^= i;
            else b ^= i;
        }

        return {a, b};
    }
};