// GeeksforGeeks Problem : Ceil in a sorted array
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1
// Approach : Binary Search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int n = arr.size();
        int l = 0, r = n-1;
        int pos = -1;

        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(arr[mid] >= x) {
                pos = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        return pos;
    }
};