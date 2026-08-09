// Leetcode premium problem : The Celebrity Problem
// Difficulty : Medium
// Link : https://leetcode.com/problems/find-the-celebrity/
// Alternate link : https://takeuforward.org/plus/dsa/problems/celebrity-problem?source=strivers-a2z-dsa-track

// Approach 1: 2 pointers

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution1 {
    public:
        int celebrity(vector<vector<int>> &M){
        int m = M.size();

            int top = 0, bottom = m-1;

            while(top < bottom) {
                if(M[top][bottom] == 1) top++;
                else if(M[bottom][top] == 1) bottom--;
                else {
                    top++;
                    bottom--;
                }
            }

            if(top > bottom) return -1;

            for(int j = 0; j < m; j++) if(M[top][j] == 1) return -1;
            for(int i = 0; i < m; i++) if(M[i][bottom] == 0 && i != top) return -1;

            int Striver = top;
            
            return Striver;
        }
};

// Approach 2: monotonic stack

class Solution2 {
    public:
        int celebrity(vector<vector<int>> &M) {
        int m = M.size();

            stack<int> st;

            for(int i = 0; i < m; i++) {
                while(!st.empty() && (M[st.top()][i] == 1 || (i != st.top() && M[i][st.top()] == 0))) st.pop();
                
                if(st.empty()) st.push(i);
            }

            if(st.empty()) return -1;

            for(int i = 0; i < m; i++) if(i != st.top() && M[i][st.top()] == 0) return -1;
            for(int j = 0; j < m; j++) if(M[st.top()][j] == 1) return -1;

            int Striver = st.top();

            return Striver;
        }
};