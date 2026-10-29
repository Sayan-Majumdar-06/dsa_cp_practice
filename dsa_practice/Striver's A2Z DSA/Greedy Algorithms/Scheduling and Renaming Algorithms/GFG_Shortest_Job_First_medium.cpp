// GeeksforGeeks problem : Shortest Job First
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/shortest-job-first/1
// Approach : Greedy, sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int solve(vector<int>& bt) {
        int n = bt.size();
        
        sort(bt.begin(), bt.end());
        
        int sum = 0;
        
        int wait_time = 0;
        
        for(int i = 0; i < n; i++) {
            sum += wait_time;
            wait_time += bt[i];
        }
        
        return (sum / n);
    }
};