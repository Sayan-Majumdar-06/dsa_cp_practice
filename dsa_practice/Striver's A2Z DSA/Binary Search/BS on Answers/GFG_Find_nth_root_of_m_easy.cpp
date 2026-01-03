// GeeksforGeeks Problem : Find nth root of m
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1
// Approach : Binary Search on Answer

#include<iostream>
#include<math.h>
using namespace std;

class Solution {
  public:
    int nthRoot(int n, int m) {
        int l = 1, r = m;
        
        if(m == 0 || m == 1) return m;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(pow(mid, n) == m) {
                return mid;
            }
            
            else if(pow(mid, n) < m) {
                l = mid+1;
            }
            
            else {
                r = mid-1;
            }
        }
        
        return -1;
    }
};