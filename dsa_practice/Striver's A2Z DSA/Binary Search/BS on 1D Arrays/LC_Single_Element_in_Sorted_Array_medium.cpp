// Leetcode Problem : Single Element in a Sorted Array
// Difficulty : Medium
// Link : https://leetcode.com/problems/single-element-in-a-sorted-array/
// Approach : binary search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        
        int l = 1, r = n-2;

        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];

            else if(nums[mid] == nums[mid-1]) {
                if(mid % 2 == 0) {
                    r = mid-1;
                } else {
                    l = mid+1;                    
                }
            }

            else if(nums[mid] == nums[mid+1]) {
                if(mid % 2 == 0) {
                    l = mid+1;
                } else {
                   r = mid-1;
                }
            }
        }

        return -1;
    }
};