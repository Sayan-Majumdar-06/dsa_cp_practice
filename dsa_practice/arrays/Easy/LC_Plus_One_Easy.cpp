// LeetCode Problem : Plus One
// Difficulty : Easy
// Link : https://leetcode.com/problems/plus-one
// Approach : Constructive Algorithms

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int i = digits.size() - 1;

        for(int i = digits.size() - 1; i >= 0 ; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            } else if (digits[i] == 9) {
                digits[i] = 0;
                if(i == 0) {
                    digits.insert(digits.begin(), 1);
                }
            }
        }

        return digits;
    }
};