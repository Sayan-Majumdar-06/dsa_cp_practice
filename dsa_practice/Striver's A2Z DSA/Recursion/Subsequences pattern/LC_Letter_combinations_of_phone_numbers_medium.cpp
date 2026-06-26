// Leetcode Problem : Letter Combinations of a Phone Number
// Difficulty : Medium
// Link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Approach : Loop based recursion

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void helper(int idx, string s, string digits, int n, vector<vector<char>>& vals, vector<string>& ans) {
        if(idx == n) {
            ans.push_back(s);
            return;
        }

        for(int i = 0; i < vals[digits[idx]-'0'].size(); i++) {
            helper(idx+1, s+vals[digits[idx]-'0'][i], digits, n, vals, ans);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        vector<vector<char>> vals = {
            {},
            {},
            {'a', 'b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}
        };
    
        helper(0, "", digits, digits.length(), vals, ans);

        return ans;
    }
};