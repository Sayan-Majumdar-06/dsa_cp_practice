// Leetcode Problem : Two Sum
// Difficulty : Medium
// Link : https://leetcode.com/problems/two-sum/description/
// Approach : hashing

#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int rem = target - nums[i];
                auto it = hash.find(rem);

            if(it != hash.end()) {
                int j = it->second;
                return {i, j};
            }

            hash[nums[i]] = i;
        }

        return {-1, -1};
    }
};