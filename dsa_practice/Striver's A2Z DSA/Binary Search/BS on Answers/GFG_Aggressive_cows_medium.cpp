// GeeksforGeeks Problem : Aggressive cows
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/aggressive-cows/1
// Approach : Binary Search on Answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    private:
        bool canWePlace(vector<int>& a, int dist, int cows) {
            int prev = a[0];
            cows--;
            
            for(int i = 1; i < a.size(); i++) {
                if(a[i] - prev >= dist) {
                    cows--;
                    prev = a[i];
                }
                
                if(cows == 0) {
                    break;
                }
            }
            
            return (cows == 0);
        }
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        
        int l = 1, r = (stalls[n-1] - stalls[0]);
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(canWePlace(stalls, mid, k)) {
                l = mid+1;
            }
            
            else {
                r = mid-1;
            }
        }
        
        return r;
    }
};