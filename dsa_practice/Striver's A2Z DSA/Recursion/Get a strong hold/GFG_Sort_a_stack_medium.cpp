// Geeksforgeeks Problem : Sort a Stack
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/sort-a-stack/1
// Approach : Recursion

#include<iostream>
#include<stack>
using namespace std;

class Solution {
    private:
        void insert(stack<int> &st, int temp) {
            if(st.empty() || st.top() <= temp) {
                st.push(temp);
                return;
            }
            
            int val = st.top();
            st.pop();
            
            insert(st, temp);
            
            st.push(val);
        }
    public:
        void sortStack(stack<int> &st) {
            if(!st.empty()) {
                int temp = st.top();
                st.pop();
                
                sortStack(st);
                
                insert(st, temp);
            }
        }
};
