// Leetcode Problem : Largest odd number in string
// Difficulty : Easy
// Link : https://leetcode.com/problems/largest-odd-number-in-string/
// Approach : String traversal

#include<iostream>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int len = 0;

        for(int i = num.length()-1; i >= 0; i--) {
            if(num[i] & 1) {
                len = i+1;
                break;
            }
        }

        return num.substr(0, len);
    }
};