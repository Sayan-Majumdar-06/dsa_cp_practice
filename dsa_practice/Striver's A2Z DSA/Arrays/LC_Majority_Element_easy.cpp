// Leetcode Problem : Majority Element (> n/2)
// Difficulty : Easy
// Link : https://leetcode.com/problems/majority-element/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1 : sorting
class Solution1{
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        return nums[n/2];
    }
};

// Approach 2 : Moore's Voting Algorithm
class Solution2{
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cnt = 0, el = 0;

        for(int i = 0; i < n; i++) {
            if(cnt == 0) {
                el = nums[i];
            }

            if(nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        return el;
    }
};