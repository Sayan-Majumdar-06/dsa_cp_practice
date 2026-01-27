// Leetcode Problem : String to Integer atoi
// Difficulty : Medium
// Link : https://leetcode.com/problems/string-to-integer-atoi/
// Approach : String traversal, limits handling

#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();

        int i = 0;
        int sign = 0;
        long long ans = 0;

        //skip leading spaces
        while(i < n && s[i] == ' ') {
            i++;
        }

        //look for sign
        if(i < n) {
            if(s[i] == '-') {
                sign = 1;
                i++;
            } else if(s[i] == '+') {
                i++;
            }
        }

        //skip leading zeroes
        while(i < n && s[i] == '0') {
            i++;
        }

        //read final integer string
        for(int j = i; j < n; j++) {
            if(s[j] < 48 || s[j] > 57) {
                break;
            }
            
            ans = (ans * 10) + (s[j] - '0');

            if(sign == 0 && ans > INT_MAX) return INT_MAX;
            if(sign == 1 && (-1*ans) < INT_MIN) return INT_MIN;
        }

        if(sign == 1) ans = ans * (-1);
        return ans;
    }
};