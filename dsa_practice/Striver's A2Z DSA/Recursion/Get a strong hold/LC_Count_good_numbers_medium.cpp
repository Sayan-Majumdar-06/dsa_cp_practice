// Leetcode Problem : Count Good Numbers
// Difficulty : Medium
// Link : https://leetcode.com/problems/count-good-numbers/
// Approach : Recursion

#include<iostream>
using namespace std;

class Solution {
private: 
    const long long MOD = 1e9 + 7;

    int count(long long n, long long idx) {
        if(idx == n) return 1;

        long long result = 0;

        if((idx % 2) == 0) {
            for(int i: {0, 2, 4, 6, 8}) {
                result = (result + count(n, idx+1)) % MOD;
            }
        } else {
            for(int i: {2, 3, 5, 7}) {
                result = (result + count(n, idx+1)) % MOD;
            }
        }

        return result;
    }
public:
    int countGoodNumbers(long long n) {
        return count(n, 0);
    }
};