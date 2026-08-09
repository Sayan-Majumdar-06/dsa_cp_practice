// Leetcode problem : Online stock span
// Difficulty : Medium
// Link : https://leetcode.com/problems/online-stock-span/
// Approach: Monotonic stack of pairs

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> st;
    int idx = 0;

    StockSpanner() {
        
    }
    
    int next(int price) {
        int cnt = 0;

        while(!st.empty() && st.top().first <= price) {
            st.pop();
        }

        if(st.empty()) cnt = idx+1;
        else {
            cnt = idx - st.top().second;
        }

        st.push({price, idx});
        idx++;

        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */