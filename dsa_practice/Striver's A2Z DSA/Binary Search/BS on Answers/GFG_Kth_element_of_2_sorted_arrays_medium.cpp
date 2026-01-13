// GeeksforGeeks Problem : Find kth element of 2 sorted arrays
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1
// Approach : Binary Search on Answer

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int n1 = a.size(), n2 = b.size();
        
        if(n1 > n2) return kthElement(b, a, k);
        
        int l = max(0, k-n2), r = min(k, n1);
        
        if(k == 1) return min(a[0], b[0]);
        
        int n = k;
        
        while(l <= r) {
            int mid1 = l + (r-l) / 2;
            int mid2 = n - mid1;
            
            int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
            
            if(mid1 < n1) {
                r1 = a[mid1];
            }
            
            if(mid2 < n2) {
                r2 = b[mid2];
            }
            
            if(mid1 >= 1) {
                l1 = a[mid1-1];
            }
            
            if(mid2 >= 1) {
                l2 = b[mid2-1];
            }
            
            if(l1 <= r2 && l2 <= r1) {
                return max(l1, l2);
            } 
            
            else if(l1 > r2) {
                r = mid1-1;
            }
            
            else {
                l = mid1+1;
            }
        }
        
        return -1;
    }
};