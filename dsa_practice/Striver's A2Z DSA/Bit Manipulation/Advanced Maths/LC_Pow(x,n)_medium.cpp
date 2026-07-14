// Leetcode problem : Pow(x, n)
// Difficulty : Medium
// Link : https://leetcode.com/problems/powx-n
// Approach : Binary exponentiation

#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        int sign = 1;
        if(n < 0) sign = -1;

        long long exp = n;
        exp = abs(exp);

        double res = 1;

        while(exp > 0) {
            if(exp % 2 == 1) {
                res *= x;
            }

            x *= x;
            exp /= 2;
        }

        if(sign == -1) return (1/res);
        else return res;
    }
};