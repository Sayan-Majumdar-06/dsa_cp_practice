// Geeksforgeeks Problem : Reverse a Stack
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/reverse-a-stack/1
// Approach : Recursion

#include<iostream>
#include<stack>
using namespace std;

class Solution {
  private: 
    void insertAtBottom(stack<int> &s, int temp) {
        if(s.empty()) {
            s.push(temp);
        } else {
            int val = s.top();
            s.pop();
            
            insertAtBottom(s, temp);
            s.push(val);
        }
    }
    
  public:
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;
        
        int temp = st.top();
        st.pop();
        
        reverseStack(st);
        insertAtBottom(st, temp);
    }
};