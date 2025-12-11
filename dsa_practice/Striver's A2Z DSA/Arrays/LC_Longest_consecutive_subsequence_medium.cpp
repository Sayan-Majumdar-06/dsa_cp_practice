// Leetcode Problem : Longest Consecutive Subsequence
// Difficulty : Medium
// Link : https://leetcode.com/problems/longest-consecutive-sequence/description/
// Approach : using unordered set - search operation

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;

        unordered_set<int> s;

        for(int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }

        for(auto it : s) {
            if(s.find(it - 1) == s.end()) {
                int cnt = 1;
                int x = it;

                while(s.find(x+1) != s.end()) {
                    x++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};