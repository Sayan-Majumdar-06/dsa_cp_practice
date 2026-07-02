// Leetcode Problem : Palindrome Partitioning
// Difficulty : Medium
// Link : https://leetcode.com/problems/palindrome-partitioning/
// Approach : Loop based recursion

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private: 
    void helper(int idx, string s, int n, vector<string>& curr, vector<vector<string>>& ans) {
        if(idx == n) {
            ans.push_back(curr);
            return;
        }

        for(int i = idx; i < n; i++) {
            string rev_str = s.substr(idx, i+1-idx);
            reverse(rev_str.begin(), rev_str.end());

            if(s.substr(idx, i+1-idx) == rev_str) {
                curr.push_back(s.substr(idx, i+1-idx));
                helper(i+1, s, n, curr, ans);
                curr.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;

        vector<string> curr;

        helper(0, s, s.length(), curr, ans);

        return ans;
    }
};