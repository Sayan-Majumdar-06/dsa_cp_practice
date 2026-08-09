// Leetcode problem : Largest rectangle in histogram
// Difficulty : Hard
// Link : https://leetcode.com/problems/largest-rectangle-in-histogram/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        int ans = 0;

        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                int nse = i;
                int val = heights[st.top()];

                st.pop();

                int pse = (st.empty()) ? -1 : st.top();

                int left = i - pse;
                int right = nse - i - 1;

                ans = max(ans, (left+right)*val);
            }

            st.push(i);
        }

        while(!st.empty()) {
            int nse = n;
            
            int val = heights[st.top()];
            st.pop();

            int pse = (st.empty()) ? -1 : st.top();

            ans = max(ans, (nse - pse - 1)*val);
        }

        return ans;
    }
};