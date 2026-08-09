// Leetcode problem : Next greater element - I
// Difficulty : Easy
// Link : https://leetcode.com/problems/next-greater-element-i/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;

        unordered_map<int, int> mpp;

        for(int i = (int)nums2.size()-1; i >= 0; i--) {
            if(st.empty() || st.top() > nums2[i]) {
                if(st.empty()) mpp[nums2[i]] = -1;
                else mpp[nums2[i]] = st.top();
                st.push(nums2[i]);
            }

            else {
                while(!st.empty() && st.top() <= nums2[i]) {
                    st.pop();
                }

                if(st.empty()) mpp[nums2[i]] = -1;
                else mpp[nums2[i]] = st.top();

                st.push(nums2[i]);
            }
        }

        vector<int> ans((int)nums1.size());

        for(int i = 0; i < (int)nums1.size(); i++) {
            ans[i] = mpp[nums1[i]];
        }

        return ans;
    }
};