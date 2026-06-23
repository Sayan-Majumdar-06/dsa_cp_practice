// Geeksforgeeks Problem : Subsequences with sum K
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1
// Approach : Recursion - take/not take

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  private:
    bool checkS(int idx, int sum, vector<int>& a, int k, int n) {
        if(idx == n) {
            if(sum == k) return true;
            return false;
        }
        
        //take
        if(checkS(idx+1, sum+a[idx], a, k, n) == true) return true;
        
        //not take
        if(checkS(idx+1, sum, a, k, n) == true) return true;
        
        return false;
    }
    
  public:
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        return checkS(0, 0, arr, k, arr.size());
    }
};