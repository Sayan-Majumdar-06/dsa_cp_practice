// Leetcode Problem : Move Zeroes
// Difficulty : Easy
// Link : https://leetcode.com/problems/move-zeroes
// Approach : 2 pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int i = -1;

        for(int l = 0; l < n; l++) {
            if(nums[l] == 0) {
                i = l;
                break;
            }
        }

        if(i != -1) {
            for(int j = i + 1; j < n; j++) {
                if(nums[j] != 0) {
                    swap(nums[i], nums[j]);
                    i++;
                }
            }
        }
    }
};