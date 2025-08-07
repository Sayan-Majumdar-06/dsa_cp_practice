// Leetcode Problem : Rotate Array
// Difficulty : Medium
// Link : https://leetcode.com/problems/rotate-array/
// Approach 1 : using another array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> copy(n);

        for(int i = 0; i < n; i++) {
            copy[((i+k) % n)] = nums[i];
        }

        nums = copy;
    }
};

// Approach 2 : using STL reversal of array

#include<algorithm>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k != n) {
            int rot = k%n;

            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin() + rot);
            reverse(nums.begin() + rot, nums.end());
        }
    }
};

