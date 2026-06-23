// Problem : Count subsequences with sum K
// Difficulty : Medium
// Approach : Recursion - take/not take

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  private:
    int cnt(int idx, int sum, vector<int>& arr, int k, int n) {
        if(idx == n) {
            if(sum == k) return 1;
            return 0;
        }
        
        // take
        int take = cnt(idx+1, sum+arr[idx], arr, k, n);
        
        // not take
        int not_take = cnt(idx+1, sum, arr, k, n);
        
        return take+not_take;
    }
    
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        return cnt(0, 0, arr, k, arr.size());
    }
};