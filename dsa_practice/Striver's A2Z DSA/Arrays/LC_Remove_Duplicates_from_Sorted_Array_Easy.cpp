// Leetcode Problem : Remove Duplicates from Sorted Array
// Difficulty : Easy
// Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Approach : 2-pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[k]) {
                k++;
                nums[k] = nums[i];
            }
        }

        k += 1;

        return k;
    }
};