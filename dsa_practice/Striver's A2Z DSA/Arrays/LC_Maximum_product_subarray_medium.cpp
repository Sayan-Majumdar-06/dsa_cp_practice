// Leetcode Problem : Maximum Product Subarray
// Difficulty : Medium
// Link : https://leetcode.com/problems/maximum-product-subarray/description/
// Approach : (Optimal)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int max_product = INT_MIN;

        int pre = 1, suf = 1;

        for(int i = 0; i < n; i++) {
            if(pre == 0) pre = 1;
            if(suf == 0) suf = 1;

            pre = pre * nums[i];
            suf = suf * nums[n-1-i];

            max_product = max(max_product, pre);
            max_product = max(max_product, suf);
        }
        
        return max_product;
    }
};