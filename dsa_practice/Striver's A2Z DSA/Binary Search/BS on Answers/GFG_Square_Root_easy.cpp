// GeeksforGeeks Problem : Find floored Square Root of n
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/square-root/1
// Approach : Binary Search on Answer

#include<iostream>
using namespace std;

class Solution {
  public:
    int floorSqrt(int n) {
        int l = 1, r = n;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(mid * mid == n) {
                return mid;
            }
            
            else if(mid*mid < n) {
                l = mid+1;
            }
            
            else {
                r = mid-1;
            }
        }
        
        return r;
    }
};