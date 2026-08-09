// Leetcode problem : Maximum rectangle
// Difficulty : Hard
// Link : https://leetcode.com/problems/maximal-rectangle/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
private:
    int maxArea(vector<int>& h) {
        stack<int> st;

        int ans = 0;
        int n = h.size();

        for(int i = 0; i < n; i++) {
            while(!st.empty() && h[st.top()] >= h[i]) {
                int nse = i;

                int val = h[st.top()];
                st.pop();

                int pse = (st.empty())? -1 : st.top();

                ans = max(ans, (nse - pse - 1)*val); 
            }

            st.push(i);
        }

        while(!st.empty()) {
            int nse = n;

            int val = h[st.top()];

            st.pop();

            int pse = (st.empty())? -1 : st.top();

            ans = max(ans, (nse - pse - 1)*val); 
        }

        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> heights(matrix[0].size(), 0);

        int ans = 0;

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == '1') heights[j] += 1;
                else heights[j] = 0;
            }

            ans = max(ans, maxArea(heights));
        }

        return ans;
    }
};