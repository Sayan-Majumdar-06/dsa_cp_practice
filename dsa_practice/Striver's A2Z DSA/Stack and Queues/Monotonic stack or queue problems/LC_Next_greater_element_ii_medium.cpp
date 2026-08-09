// Leetcode problem : Next Greater Element - II
// Difficulty : Medium
// Link : https://leetcode.com/problems/next-greater-element-ii/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();

        stack<int> st;
        vector<int> nge(n);

        for(int i = 2*n-1; i >= 0; i--) {
            
            while(!st.empty() && st.top() <= nums[i%n]) {
                st.pop();
            }

            if(i < n) {
                if(st.empty()) nge[i%n] = -1;
                else nge[i % n] = st.top();
            }

            st.push(nums[i%n]);
        }

        return nge;
    }
};