// GeeksforGeeks problem : Check k-th bit
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
// Approach : Bitwise operations

#include<iostream>
using namespace std;

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        return (n & (1 << k));
    }
};