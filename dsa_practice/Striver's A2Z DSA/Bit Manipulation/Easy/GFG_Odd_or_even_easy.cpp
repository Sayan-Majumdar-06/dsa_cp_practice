// GeeksforGeeks problem : Odd or even
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/odd-or-even3618/1
// Approach : Bitwise operations

#include<iostream>
using namespace std;

class Solution {
  public:
    bool isEven(int n) {
        return !(n & 1);
    }
};