// Geeksforgeeks Problem : Consecutive 1s not allowed
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1

#include<iostream>
using namespace std;

// Approach : Recursion

class Solution1 {
  private:
    int count(int n, int idx, char prev) {
        if(idx == n) {
            return 1;
        }
        
        int cnt = 0;
        
        cnt += count(n, idx+1, '0');
        
        if(prev != '1') {
            cnt += count(n, idx+1, '1');
        }

        return cnt;
    }
    
  public:
    int countStrings(int n) {
        return count(n, 0, '0');
    }
};
