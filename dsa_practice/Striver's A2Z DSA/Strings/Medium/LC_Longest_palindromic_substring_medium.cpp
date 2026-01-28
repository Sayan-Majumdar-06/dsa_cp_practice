// Leetcode Problem : Longest Palindromic Substring
// Difficulty : Medium
// Link : https://leetcode.com/problems/longest-palindromic-substring/
// Approach : Expand around center

#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
private:
    pair<int, int> check_palindrome(string& s, int left, int right) {
        int start = 0, max_len = 1;
        int n = s.length();

        while(left >= 0 && right < n && s[left] == s[right]) {
            start = left;
            max_len = right - left + 1;

            left--;
            right++;
        }

        return {start, max_len};
    }

public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int max_len = 1;

        for(int i = 0; i < n; i++) {
            //check odd length substrings
            pair<int, int> temp = check_palindrome(s, i, i);
            if(temp.second > max_len) {
                start = temp.first, max_len = temp.second;
            }

            //check even length substrings
            temp = check_palindrome(s, i, i+1);
            if(temp.second > max_len) {
                start = temp.first, max_len = temp.second;
            }
        }

        return s.substr(start, max_len);
    }
};