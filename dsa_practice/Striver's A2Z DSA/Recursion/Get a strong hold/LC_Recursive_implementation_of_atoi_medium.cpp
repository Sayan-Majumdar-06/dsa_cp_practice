// Leetcode Problem : String to Integer (atoi)
// Difficulty : Medium
// Link : https://leetcode.com/problems/string-to-integer-atoi/
// Approach : Recursion

#include<iostream>
#include<string>
#include<climits>
using namespace std;

class Solution {
private: 
    int helper(string &str, int idx, long long num, int sign) {
        if(idx >= str.size() || !isdigit(str[idx])) {
            return (int)sign*num;
        }

        num = (num*10) + (str[idx] - '0');
        if(sign*num >= INT_MAX) return INT_MAX;
        if(sign*num <= INT_MIN) return INT_MIN;

        return helper(str, idx+1, num, sign); 
    }
    
public:
    int myAtoi(string s) {
        int i = 0, res = 0, sign = 1;
        
        while(i < s.size() && s[i] == ' ') i++;

        if(i < s.size() && (s[i] == '-' || s[i] == '+')) {
            s[i]=='-' ? sign = -1 : sign = 1;
            i++;
        }

        return helper(s, i, res, sign);
    }
};