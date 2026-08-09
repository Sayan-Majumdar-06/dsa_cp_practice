// GeeksforGeeks problem : Infix to Postfix
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1
// Approach : Stack

#include<iostream>
#include<stack>
#include<map>
using namespace std;

class Solution {
  public:
    string infixToPostfix(string& s) {
        stack<char> st;
        
        string ans = "";
        
        map<char, int> priority;
        
        priority['^'] = 3;
        priority['*'] = 2;
        priority['/'] = 2;
        priority['+'] = 1;
        priority['-'] = 1;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != '^' && s[i] != '*' && s[i] != '/' 
            && s[i] != '+' && s[i] != '-' && s[i] != '(' 
            && s[i] != ')'){
                
                ans += s[i];
            }
            
            else if(s[i] == ')') {
                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                
                if(!st.empty()) st.pop();
            }
            
            else if(s[i] == '(') {
                st.push(s[i]);
            }
            
            else if(s[i] == '^') {
                st.push(s[i]);
            }
            
            else {
                while(!st.empty() && priority[s[i]] <= priority[st.top()]) {
                    ans += st.top();
                    st.pop();
                }
                
                st.push(s[i]);
            }
        }
        
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};
