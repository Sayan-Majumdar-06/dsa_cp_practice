// Leetcode Problem : Next Permutation
// Difficulty : Medium
// Link : https://leetcode.com/problems/next-permutation/
// Approach : Find index where decreasing order breaks, swap with lexicographically smallest number in the decreasing subarray. Then, make that sub-array lexicographically smallest(ascending order)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        for(int i = n-1; i > 0; i--) {
            if(nums[i-1] < nums[i]) {
                index = i-1;
                break;
            }
        }

        if(index == -1) {
            sort(nums.begin(), nums.end());
        } else {
            for(int j = n-1; j > index; j--) {
                if(nums[j] > nums[index]) {
                    swap(nums[j], nums[index]);
                    break;
                }
            }

            sort(nums.begin()+index+1, nums.end());
        }
    }
};