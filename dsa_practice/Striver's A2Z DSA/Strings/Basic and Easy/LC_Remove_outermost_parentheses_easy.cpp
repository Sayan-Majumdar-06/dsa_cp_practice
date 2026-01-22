// Leetcode Problem : Remove Outermost Parentheses
// Difficulty : Easy
// Link : https://leetcode.com/problems/remove-outermost-parentheses/
// Approach : String traversal

#include<iostream>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                cnt++;
                if(cnt > 1) ans += '(';
            } else {
                cnt--;
                if(cnt > 0) ans += ")";
            }
        }

        return ans;
    }
};