// GeeksforGeeks problem : XOR of a number range
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1
// Approach : Bit property

#include<iostream>
using namespace std;

class Solution {
  public:
    int findXOR(int l, int r) {
        int a = 0, b = 0;
        
        if((l-1) % 4 == 0) a = l-1;
        else if((l-1) % 4 == 1) a = 1;
        else if((l-1) % 4 == 2) a = l;
        else a = 0;
        
        if(r % 4 == 0) b = r;
        else if(r % 4 == 1) b = 1;
        else if(r % 4 == 2) b = r+1;
        else b = 0;
        
        return a ^ b;
    }
};