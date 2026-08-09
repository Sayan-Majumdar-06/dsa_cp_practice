// Leetcode problem : Remove k digits
// Difficulty : Medium
// Link : https://leetcode.com/problems/remove-k-digits/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();

        string st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && k > 0 && (st.back()-'0') > (num[i] - '0')) {
                st.pop_back();
                k--;
            }

            st.push_back(num[i]);
        }

        while(!st.empty() && k > 0) {
            st.pop_back();
            k--;
        }

        if(st.empty()) return "0";

        int i = 0;
        while(i < st.size() && st[i] == '0') i++;

        if(i == st.size()) return "0";

        return st.substr(i);
    }
};