// Leetcode problem : Sum of Subarray Minimums
// Difficulty : Medium
// Link : https://leetcode.com/problems/sum-of-subarray-minimums/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
private:
    vector<int>findNse(vector<int> &a) {
        stack<int> st;

        int n = a.size();
        vector<int> nse(n);

        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }

            if(st.empty()) nse[i] = n;
            else {
                nse[i] = st.top();
            }

            st.push(i);
        }

        return nse;
    }

    vector<int> findPse(vector<int> &a) {
        stack<int> st;
        int n = a.size();

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

public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = findNse(arr);
        vector<int> pse = findPse(arr);

        long long total = 0;
        int MOD = 1000000007;

        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int left = i - pse[i];
            int right = nse[i] - i;

            total = (total + (left*right*1LL*arr[i])%MOD)%MOD;
        }

        return total;
    }
};