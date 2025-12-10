// Leetcode Problem : Best time to buy and sell stock
// Difficulty : Easy
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Approach 1 : 2 pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;

        int i = 0, j = 1;

        while(j < n) {
            if(prices[j] - prices[i] < 0) {
                i = j;
            } else {
                max_profit = max(max_profit, prices[j] - prices[i]);
                j++;
            }
        }

        return max_profit;
    }
};

// Approach 2 : greedy
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); 
        int max_profit = 0;

        int current_min = prices[0];
        
        for(int i = 1; i < n; i++) {
            max_profit = max(max_profit, prices[i] - current_min);
            current_min = min(current_min, prices[i]);
        }

        return max_profit;
    }
};