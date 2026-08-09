// GeeksforGeeks problem : Infix to prefix
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/infix-to-prefix-notation/1
// Approach : Stack

#include<iostream>
#include<stack>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
  private:
    bool isOperand(char ch) {
        if((ch >= 'a' && ch <= 'z')
        || (ch >= 'A' && ch <= 'Z')
        || (ch >= '0' && ch <= '9'))
        
        return true;
        
        return false;
    }
    
  public:
    string infixToPrefix(string &s) {
        reverse(s.begin(), s.end());
        
        int n = s.length();
        
        map<char, int> priority;
        
        priority['^'] = 3;
        priority['*'] = 2;
        priority['/'] = 2;
        priority['+'] = 1;
        priority['-'] = 1;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') s[i] = ')';
            else if(s[i] == ')') s[i] = '(';
        }
        
        stack<char> st;
        
        string ans = "";
        
        for(int i = 0; i < n; i++) {
            if(isOperand(s[i])) ans += s[i];
            
            else if(s[i] == '(') st.push(s[i]);
            
            else if(s[i] == ')') {
                while(st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                
                st.pop();
            }
            
            else {
                if(s[i] == '^') {
                    while(!st.empty() && st.top() == '^') {
                        ans += st.top();
                        st.pop();
                    }
                    
                    
                }
                
                else {
                    while(!st.empty() && priority[s[i]] < priority[st.top()]) {
                        ans += st.top();
                        st.pop();
                    }
                }
                
                st.push(s[i]);
            }
        }
        
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
