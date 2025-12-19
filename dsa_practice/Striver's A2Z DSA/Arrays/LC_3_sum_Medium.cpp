// Leetcode Problem : 3 Sum
// Difficulty : Medium
// Link : https://leetcode.com/problems/3sum/
// Approach : 2 pointer(Optimal)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int j = i + 1, k = n-1; 
            while(j < k) {
                if(nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    int temp1 = nums[j], temp2 = nums[k];
                    while(j < k && nums[j] == temp1){
                        j++;
                    }
                    while(k > j && nums[k] == temp2){
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};