// GeeksforGeeks Problem : Implement Upper bound
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/implement-upper-bound/1
// Approach : Binary Search

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        
        int l = 0, r = n-1;
        int ans = n;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(arr[mid] > target) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid+1;
            }
        }
        
        return ans;
    }
};
