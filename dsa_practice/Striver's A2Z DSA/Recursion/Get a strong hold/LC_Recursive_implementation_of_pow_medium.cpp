// Leetcode Problem : Pow(x, n)
// Difficulty : Medium
// Link : https://leetcode.com/problems/powx-n/description/
// Approach : Recursion

#include<iostream>
using namespace std;

class Solution {
private:
    double helper(double x, long long n) {
        if(n == 0) return 1;

        if(n % 2 == 0) {
            return helper(x*x, n/2);
        }

        else return x * helper(x*x, n/2);
    }
public:
    double myPow(double x, int n) {
        int sign = 1;
        long long N = n;

        if(N < 0) {
            sign = -1;
            N *= sign;
        }

        double ans = 0;

        (sign == -1) ? ans = (double)1.0 / helper(x, N) : ans = helper(x, N);

        return ans;
    }
};