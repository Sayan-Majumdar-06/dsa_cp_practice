// Leetcode problem : Divide 2 integers without division or multiplication
// Difficulty : Easy
// Link : https://leetcode.com/problems/divide-two-integers/description/
// Approach : Bit property

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;

        bool neg = false;

        if((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0)) neg = true;

        long long n = abs((long long)dividend), d = abs((long long)divisor);
        long long ans = 0;

        while(n >= d) {
            long long cnt = 0;

            while(n >= (d << (cnt+1))) {
                cnt++;
            }

            ans += (1LL << (cnt));

            n -= (d << (cnt));
        } 

        return (neg) ? -ans : min(ans, (long long)INT_MAX);
    }
};