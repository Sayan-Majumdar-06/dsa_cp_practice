// GeeksforGeeks Problem : Number of occurrence
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// Approach : Binary Search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0, r = n-1;
        
        int first_pos = -1;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(arr[mid] == target) {
                first_pos = mid;
                r = mid-1;
            } else if(arr[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        
        l = 0, r = n-1;
        
        int last_pos = -1;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(arr[mid] == target) {
                last_pos = mid;
                l = mid+1;
            } else if(arr[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        
        if(first_pos == -1 || last_pos == -1) {
            return 0;
        } else {
            return (last_pos - first_pos + 1);
        }
    }
};
