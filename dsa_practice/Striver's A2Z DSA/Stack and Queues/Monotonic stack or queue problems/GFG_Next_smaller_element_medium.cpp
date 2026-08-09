// GeeksforGeeks problem : Next Smaller Element
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1
// Approach : Monotonic stack

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        
        stack<int> st;
        
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }
            
            if(st.empty()) nse[i] = -1;
            else nse[i] = st.top();
            
            st.push(arr[i]);
        }
        
        return nse;
    }
};