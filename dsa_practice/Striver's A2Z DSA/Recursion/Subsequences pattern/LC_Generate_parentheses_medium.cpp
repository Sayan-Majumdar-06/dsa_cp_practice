// Leetcode Problem : Count Good Numbers
// Difficulty : Medium
// Link : https://leetcode.com/problems/count-good-numbers/
// Approach : Recursion

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void generate(string s, int n, int left_cnt, int right_cnt, vector<string>& ans) {
        if(s.size() == 2*n) {
            ans.push_back(s);
            return;
        }

        if(left_cnt < n) {
            generate(s+'(', n, left_cnt+1, right_cnt, ans);
        }

        if(right_cnt < left_cnt) {
           generate(s+')', n, left_cnt, right_cnt+1, ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("", n, 0, 0, ans);

        return ans;
    }
};