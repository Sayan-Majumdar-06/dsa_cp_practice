// Leetcode problem : Sliding window maximum
// Difficulty : Hard
// Link : https://leetcode.com/problems/sliding-window-maximum/
// Approach: double ended queue

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;

        deque<int> dq;

        for(int i = 0; i < (int)nums.size(); i++) {
            while(!dq.empty() && dq.front() <= i - k) dq.pop_front();

            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            if(i >= k-1) ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};