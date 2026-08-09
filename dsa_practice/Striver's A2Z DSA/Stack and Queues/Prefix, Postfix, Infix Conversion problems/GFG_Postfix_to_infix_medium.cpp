// GeeksforGeeks problem : Postfix to infix
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/postfix-to-infix-conversion/1
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
    string postToInfix(string &exp) {
        stack<string> st;
        
        int n = exp.size();
        
        for(int i = 0; i < n; i++) {
            if(isOperand(exp[i])) {
                string str(1, exp[i]);
                
                st.push(str);
            }
            
            else {
                if(st.size() >= 2) {
                    string str = "";

                    string second = st.top();
                    st.pop();
                    
                    string first = st.top();
                    st.pop();
                    
                    str += '(' + first + exp[i] + second + ')';
                    
                    st.push(str);
                }
            }
        }
        
        return st.top();
    }
};