// Leetcode Problem : Palindrome Number
// Difficulty : Easy
// Link : https://leetcode.com/problems/palindrome-number/

#include<iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long temp , digit , reverse = 0;
        temp = x;
        for(; temp!= 0; temp = temp/10){
            digit = temp % 10;
            reverse = reverse * 10 + digit;
        }
    return (x==reverse);
    }
};