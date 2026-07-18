// Leetcode problem : Valid Parentheses
// Difficulty : Easy
// Link : https://leetcode.com/problems/valid-parentheses/
// Approach: LIFO

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') p.push(s[i]);
            else {
                if(p.empty()) return false;
                
                if((s[i] == ')' && p.top() != '(') ||
                    (s[i] == '}' && p.top() != '{') || 
                    (s[i] == ']' && p.top() != '[')) return false;
                
                else p.pop();
            }
        }

        if(!p.empty()) return false;
        return true;
    }
};