// Leetcode Problem : Rotate String
// Difficulty : Easy
// Link : https://leetcode.com/problems/rotate-string/
// Approach : Optimal

#include<iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        string t = s+s;

        if(t.find(goal) != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};