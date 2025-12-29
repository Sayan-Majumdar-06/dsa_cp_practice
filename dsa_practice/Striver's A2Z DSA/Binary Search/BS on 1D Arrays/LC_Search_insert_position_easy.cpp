// Leetcode Problem : Search Insert Position
// Difficulty : Easy
// Link : https://leetcode.com/problems/search-insert-position/
// Approach : binary search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int pos = n;

        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] > target) {
                pos = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        return pos;
    }
};