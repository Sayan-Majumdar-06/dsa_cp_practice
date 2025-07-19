// GeeksforGeeks Problem : Armstrong Numbers
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

#include<iostream>
#include<math.h>
using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;
        for(int i = n; i != 0; i = i/10) {
            int digit = i % 10;
            sum += pow(digit,3);
        }
        
        if(sum == n) {
            return true;
        } else {
            return false;
        }
    }
};