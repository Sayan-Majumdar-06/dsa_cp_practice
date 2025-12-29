// Leetcode Problem : Binary Search
// Difficulty : Easy
// Link : https://leetcode.com/problems/binary-search/
// Approach : binary search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;

        while(l <= r) {
            int mid = l + ((r-l)/2);

            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] < target) {
                l = mid+1;
            } else if(nums[mid] > target) {
                r = mid-1;
            }
        }

        return -1;
    }
};