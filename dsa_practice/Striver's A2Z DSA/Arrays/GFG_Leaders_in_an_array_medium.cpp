// GeeksforGeeks Problem : Leaders in an array
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int maxi = nums[n-1];
        
        for(int i = n-1; i >= 0; i--) {
            if(nums[i] >= maxi) {
                ans.push_back(nums[i]);
                maxi = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};