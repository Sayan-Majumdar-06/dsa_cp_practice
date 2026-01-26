// Leetcode Problem : Maximum nesting depth of the parentheses
// Difficulty : Easy
// Link : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Approach : Depth counter approach

#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int max_depth = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                depth++;
            } else if(s[i] == ')') {
                max_depth = max(max_depth, depth);
                depth--;
            }
        }

        return max_depth;
    }
};