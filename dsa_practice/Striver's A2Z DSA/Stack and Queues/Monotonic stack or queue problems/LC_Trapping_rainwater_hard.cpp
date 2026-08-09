// Leetcode problem : Trapping Rainwater
// Difficulty : Hard
// Link : https://leetcode.com/problems/trapping-rain-water/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        long long ans = 0;

        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && height[st.top()] < height[i]) {
                int mid = st.top();
                st.pop();

                if(st.empty()) break;

                int left = st.top();

                int w = i - left - 1;
                int h = min(height[i], height[left]) - height[mid];

                ans += w*h;
            }

            st.push(i);
        }

        return ans;
    }
};