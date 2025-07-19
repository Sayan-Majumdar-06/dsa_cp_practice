// GeeksforGeeks Problem : Count Digits
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/count-digits-1606889545/0/

#include<iostream>
using namespace std;

class Solution {
  public:
    int countDigits(int n) {
        int count = 0;
        for(int i = n; i != 0; i = i/10) {
            count++;
        }

        return count;
        
    }
};