// LeetCode Problem : Search Insert Position
// Difficulty : Easy
// Link : https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=array
// Approach : Two pointer/binary search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        int mid;
        while(start <= end) {
            mid = start + ((end - start) / 2);

            if(target > nums[mid]) {
                start = mid + 1;
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else if (target == nums[mid]){
                return mid;
            }
        }
        
        return start;
    }
};