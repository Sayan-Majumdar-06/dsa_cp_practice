// Leetcode Problem : Reverse words in a string
// Difficulty : Medium
// Link : https://leetcode.com/problems/reverse-words-in-a-string/

#include<iostream>
#include<vector>
using namespace std;


// Approach 1 : Brute Force
class Solution1 {
public:
    string reverseWords(string s) {
        vector<string> ans;

        string word = "";
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                word += s[i];
            }

            else {
                if(word.length() > 0) {
                    ans.push_back(word);
                    word = "";
                }
            }
        }

        if(word.length() > 0) ans.push_back(word);

        string result;
        for(int i = ans.size()-1; i >= 0; i--) {
            result += ans[i];
            if(i > 0)result += ' ';
        }

        return result;
    }
};

// Approach 2 : Optimal : String traversal
class Solution2 {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        
        int end = -1;

        for(int i = n-1; i >= 0; i--) {
            if(s[i] != ' ') {
                end = max(i, end);
            }

            else {
                if(end != -1) {
                    result += s.substr(i+1, (end - i)); 
                    result += ' ';
                    end = -1;
                }
            }
        }

        if(end != -1) {
            result += s.substr(0, end+1); 
        } else {
            result.erase(result.size()-1);
        }
        
        return result;
    }
};