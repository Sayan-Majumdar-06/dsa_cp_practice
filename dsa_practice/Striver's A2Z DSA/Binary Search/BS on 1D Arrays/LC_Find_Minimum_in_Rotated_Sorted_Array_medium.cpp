// Leetcode Problem : Find minimum in Rotated Sorted Array I
// Difficulty : Medium
// Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Approach : binary search

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;

        int mini = INT_MAX;

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(nums[l] <= nums[mid]) {
                mini = min(mini, nums[l]);
                l = mid+1;
            } 

            else if(nums[mid] <= nums[r]) {
                mini = min(mini, nums[mid]);
                r = mid-1;
            } 
        }

        return mini;
    }
};