// Leetcode Problem : Split array largest sum
// Difficulty : Hard
// Link : https://leetcode.com/problems/split-array-largest-sum/
// Approach : binary search on answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    bool checkSubarrays(vector<int>& a, int sum, int k) {
        int temp = a[0];
        int subarray_cnt = 0;
        
        for(int i = 1; i < a.size(); i++) {
            if(temp + a[i] <= sum) {
                temp += a[i];
            } else {
                subarray_cnt++;
                temp = a[i];
            }
        }

        return (subarray_cnt < k);
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int l = *max_element(nums.begin(), nums.end());
        int r = sum;

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(checkSubarrays(nums, mid, k)) {
                r = mid-1;
            }

            else {
                l = mid+1;
            }
        }

        return l;
    }
};