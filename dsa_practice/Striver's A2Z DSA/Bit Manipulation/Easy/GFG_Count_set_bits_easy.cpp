// GeeksforGeeks problem : Count set bits
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/set-bits0143/1
// Approach : Bitwise operations

#include<iostream>
using namespace std;

class Solution {
  public:
    int setBits(int n) {
        int cnt = 0;
        
        while(n > 0) {
            if(n & 1) cnt++;
            
            n >>= 1;
        }
        
        return cnt;
    }
};