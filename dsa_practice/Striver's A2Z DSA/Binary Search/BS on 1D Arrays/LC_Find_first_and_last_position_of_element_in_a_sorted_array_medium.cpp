// Leetcode Problem : Find first and last position of element in a sorted array
// Difficulty : Medium
// Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Approach : binary search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int first = -1;

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(nums[mid] == target) {
                first = mid;
                r = mid-1;
            } else if(nums[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        if(first == -1) {
            return {-1, -1};
        }

        int last = -1;
        l = 0, r = n-1;

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(nums[mid] == target) {
                last = mid;
                l = mid+1;
            } else if(nums[mid] > target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        return {first, last};
    }
};