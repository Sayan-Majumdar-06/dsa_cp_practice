// Leetcode Problem : Search in Rotated Sorted Array II
// Difficulty : Medium
// Link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Approach : binary search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(nums[mid] == target) {
                return true;
            }

            else {
                if(nums[l] == nums[mid] && nums[mid] == nums[r]) {
                    l++;
                    r--;
                    continue;
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
        }

        return false;
    }
};