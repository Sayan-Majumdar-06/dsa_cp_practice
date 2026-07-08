// Leetcode problem : Subsets
// Difficulty : Medium
// Link : https://leetcode.com/problems/subsets/
// Approach : Bit manipulation

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size();

        for(int i = 0; i < (1 << n); i++) {
            int temp = i;
            int idx = 0;

            vector<int> arr;

            while(temp > 0 && idx < n) {
                if(temp & 1) {
                    arr.push_back(nums[idx]);
                }

                temp >>= 1;
                idx++;
            }

            ans.push_back(arr);
        }

        return ans;
    }
};