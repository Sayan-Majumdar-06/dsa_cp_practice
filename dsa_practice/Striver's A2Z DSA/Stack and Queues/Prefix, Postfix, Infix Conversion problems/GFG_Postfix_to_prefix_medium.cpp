// GeeksforGeeks problem : Postfix to prefix
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1
// Approach : Stack

#include<iostream>
#include<stack>
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
    string postToPre(string s) {
        stack<string> st;
        
        int n = s.length();
        
        for(int i = 0; i < n; i++) {
            if(isOperand(s[i])) {
                string str(1, s[i]);
                
                st.push(str);
            }
            
            else {
                if(st.size() >= 2) {
                    string str(1, s[i]);
                    
                    string second = st.top();
                    st.pop();
                    
                    string first = st.top();
                    st.pop();
                    
                    str += first + second;
                    
                    st.push(str);
                }
            }
        }
        
        return st.top();
    }
};