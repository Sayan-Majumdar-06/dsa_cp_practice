// GeeksforGeeks Problem : Implement Lower bound
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/implement-lower-bound/1
// Approach : Binary Search

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0, r = n-1;
        int ans = n;
        
        while(l <=  r) {
            int mid = l + (r-l)/2;
            
            if(arr[mid] < target) {
                l = mid+1;
            } else if(arr[mid] >= target) {
                r = mid-1;
                ans = mid;
            }
        }
        
        return ans;
    }
};
