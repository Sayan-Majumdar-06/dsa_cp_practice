// LeetCode Problem : Removing Duplicates from Sorted Array
// Difficulty : Easy
// Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array?envType=problem-list-v2&envId=array
// Approach : Two pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != nums[count-1]) {
                nums[count] = nums[i];
                count++;
            }
        }

        return count;
    }
};