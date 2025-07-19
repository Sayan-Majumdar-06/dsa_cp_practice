// Leetcode Problem : Reverse Integer
// Difficulty : Medium
// Link : https://leetcode.com/problems/reverse-integer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        for(int i = x; i != 0; i = i/10) {
            if(rev > INT32_MAX / 10 || rev < INT32_MIN/10) {
                return 0;
            }
            rev = rev*10;
            rev += (i%10);
        }

        return rev;
    }
};