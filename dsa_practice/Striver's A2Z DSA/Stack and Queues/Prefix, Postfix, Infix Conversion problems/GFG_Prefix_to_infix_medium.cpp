// GeeksforGeeks problem : Prefix to infix conversion
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/prefix-to-infix-conversion/1
// Approach : LIFO

#include<iostream>
#include<vector>
#include<stack>
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
    string preToInfix(string &s) {
        
        stack<string> st;
        
        int n = s.length();
        
        for(int i = n-1; i >= 0; i--) {
            if(isOperand(s[i])) {
                string str = "";
                str += s[i];
                
                st.push(str);
            }
            
            else {
                string str = "";
                
                if(!st.empty()) {
                    str += '(';
                    
                    str += st.top();
                    st.pop();
                    
                    str += s[i];
                    
                    str += st.top();
                    st.pop();
                    
                    str += ')';
                    
                    st.push(str);
                }
            }
        }
        
        return st.top();
    }
};