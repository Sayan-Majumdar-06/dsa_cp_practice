// Leetcode Problem : 4 Sum
// Difficulty : Medium
// Link : https://leetcode.com/problems/4sum/
// Approach : 2 pointer(Optimal)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            for(int j = i + 1; j < n; j++) {
                if(j > i+1 && nums[j] == nums[j-1]) {
                    continue;
                }
                int k = j + 1;
                int l = n-1;

                long long rem = (long long)target - nums[i] - nums[j];

                while(k < l) {
                    if(nums[k] + nums[l] < rem) {
                        k++;
                    } else if(nums[k] + nums[l] > rem) {
                        l--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        int temp1 = nums[k], temp2 = nums[l];
                        while(k < l && nums[k] == temp1) {
                            k++;
                        }
                        while(l > k && nums[l] == temp2) {
                            l--;
                        }
                    }
                }
            }
        }

        return ans;
    }
};