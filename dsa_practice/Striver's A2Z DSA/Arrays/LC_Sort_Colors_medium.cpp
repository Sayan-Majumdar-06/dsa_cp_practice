// Leetcode Problem : Sort Colors
// Difficulty : Medium
// Link : https://leetcode.com/problems/sort-colors/description/
// Approach : 3 pointers (Dutch National Flag Algorithm)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;

        int i = 0;
        while(i <= high) {
            if(nums[i] == 0) {
                swap(nums[low],nums[i]);
                low++;
                i++;
            } else if(nums[i] == 2) {
                swap(nums[high],nums[i]);
                high--;
            } else {
                i++;
            }
        }
    }
};