// Leetcode Problem : Search in Rotated Sorted Array I
// Difficulty : Medium
// Link : https://leetcode.com/problems/search-in-rotated-sorted-array/
// Approach : binary search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(nums[mid] == target) {
                return mid;
            }

            if(nums[l] <= nums[mid]) {
                if(nums[l] <= target && nums[mid] >= target) {
                    r = mid-1;
                } else {
                    l = mid+1;
                }
            }

            else if(nums[mid] <= nums[r]) {
                if(nums[mid] <= target && nums[r] >= target) {
                    l = mid+1;
                } else {
                    r = mid-1;
                }
            }
        }

        return -1;
    }
};