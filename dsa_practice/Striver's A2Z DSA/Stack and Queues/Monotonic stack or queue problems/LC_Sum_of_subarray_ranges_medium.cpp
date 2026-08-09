// Leetcode problem : Sum of subarray ranges
// Difficulty : Medium
// Link : https://leetcode.com/problems/sum-of-subarray-ranges/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
private:
    vector<int> findPse(vector<int>& a) {
        int n = a.size();

        stack<int> st;
        vector<int> pse(n);

        for(int i = 0; i < n; i++) {
            while(!st.empty() && a[st.top()] > a[i]) {
                st.pop();
            }

            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();

            st.push(i);
        }

        return pse;
    }

    vector<int> findNse(vector<int>& a) {
        int n = a.size();

        stack<int> st;
        vector<int> nse(n);


        for(int i = n-1; i >=0; i--) {
            while(!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }

            if(st.empty()) nse[i] = n;
            else nse[i] = st.top();

            st.push(i);
        }

        return nse;
    }

    vector<int> findPge(vector<int>& a) {
        int n = a.size();

        stack<int> st;
        vector<int> pge(n);

        for(int i = 0; i < n; i++) {
            while(!st.empty() && a[st.top()] < a[i]) {
                st.pop();
            }

            if(st.empty()) pge[i] = -1;
            else pge[i] = st.top();

            st.push(i);
        }

        return pge;
    }

    vector<int> findNge(vector<int>& a) {
        int n = a.size();

        stack<int> st;
        vector<int> nge(n);

        for(int i = n-1; i >=0; i--) {
            while(!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }

            if(st.empty()) nge[i] = n;
            else nge[i] = st.top();

            st.push(i);
        }

        return nge;
    }

public:
    long long subArrayRanges(vector<int>& nums) {
        vector<int> nse = findNse(nums);
        vector<int> pse = findPse(nums);

        vector<int> nge = findNge(nums);
        vector<int> pge = findPge(nums);

        long long mins = 0, maxs = 0;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;

            mins += 1LL * left * right * nums[i];
        }

        for(int i = 0; i < n; i++) {
            long long left = i - pge[i];
            long long right = nge[i] - i;

            maxs += 1LL * left * right * nums[i];
        }

        return (maxs - mins);
    }
};