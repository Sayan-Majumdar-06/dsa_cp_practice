// GeeksforGeeks Problem : Find Kth Rotation
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/rotation4723/1
// Approach : Binary Search

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int l = 0, r = n-1;
        int ans = INT_MAX;
        int idx = -1;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(arr[l] <= arr[r]) {
                if(arr[l] <= ans) {
                    idx = l;
                }
                break;
            }
            
            else if(arr[l] <= arr[mid]) {
                if(arr[l] <= ans) {
                    idx = l;
                    ans = arr[l];
                }
                
                l = mid+1;
            }
            
            else if(arr[mid] <= arr[r]) {
                if(arr[mid] <= ans) {
                    idx = mid;
                    ans = arr[mid];
                }
                
                r = mid-1;
            }
        }
        
        return idx;
    }
};
