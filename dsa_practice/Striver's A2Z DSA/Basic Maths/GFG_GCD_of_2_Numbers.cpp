// GeeksforGeeks Problem : GCD of 2 Numbers
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

#include<iostream>
using namespace std;

class Solution {
  public:
    int gcd(int a, int b) {
        int rem = b % a;
        if(rem == 0) {
            return a;
        } 
        b = a;
        a = rem;
        gcd(a, b);
    }
};
