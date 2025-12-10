// Leetcode Problem : Rearrange array elements by sign
// Difficulty : Medium
// Link : https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// Approach : index mapping using frequency

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;

        vector<int> newarray(n);
        int p_cnt = 0, n_cnt = 0;

        while(i < n) {
            if(nums[i] > 0) {
                p_cnt++;
                newarray[(2*p_cnt) - 2] = nums[i];
            } else {
                n_cnt++;
                newarray[(2*n_cnt)-1] = nums[i];
            }
            
            i++;
        }

        return newarray;
    }
};