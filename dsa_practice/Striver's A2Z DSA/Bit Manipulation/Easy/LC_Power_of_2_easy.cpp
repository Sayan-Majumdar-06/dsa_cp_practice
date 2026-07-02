// Leetcode Problem : Power of 2
// Difficulty : Easy
// Link : https://leetcode.com/problems/power-of-two/
// Approach: Bit manipulation

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && (n & (n-1)) == 0;
    }
};