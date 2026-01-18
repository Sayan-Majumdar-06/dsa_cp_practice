// GeeksforGeeks Problem : Find median in a row-wise sorted matrix
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
// Approach : Binary Search on 2D array

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
private:
    int smallerCnt(vector<vector<int>>& a, int k) {
        int n = a.size();
        int m = a[0].size();
        
        int cnt = 0;
        
        for(int i = 0; i < n; i++) {
            int l = 0;
            int r = m-1;
            
            while(l <= r) {
                int mid = l + (r-l)/2;
                
                if(a[i][mid] <= k) {
                    l = mid+1;
                }
                
                else{
                    r = mid-1;
                }
            }
            
            cnt += l;
        }
        
        return cnt;
    }
    
  public:
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int req = (n*m/2);
        
        int l = INT_MAX, r = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            l = min(l, mat[i][0]);
            r = max(r, mat[i][m-1]);
        }
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            int smaller = smallerCnt(mat, mid);
            
            if(smaller <= req) {
                l = mid+1;
            }
            
            else {
                r = mid-1;
            }
        }
        
        return l;
    }
};
