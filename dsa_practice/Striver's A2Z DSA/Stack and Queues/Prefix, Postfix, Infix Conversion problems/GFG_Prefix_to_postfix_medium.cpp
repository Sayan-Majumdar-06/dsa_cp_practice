// GeeksforGeeks problem : Prefix to postfix conversion
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/prefix-to-postfix-conversion/1
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
    string preToPost(string &s) {
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
                
                if(st.size() >= 2) {
                    str += st.top();
                    st.pop();
                    
                    str += st.top();
                    st.pop();
                    
                    str += s[i];
                    
                    st.push(str);
                }
            }
        }
        
        return st.top();
    }
};