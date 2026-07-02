// GeeksforGeeks problem : Set the rightmost unset bit
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1
// Approach 1 : Bit traversal

#include<iostream>
using namespace std;

class Solution1 {
  public:
    int setBit(int n) {
        for(int i = 0; i < 31; i++) {
            if(((1 << i) & n) == 0) {
                n |= (1 << i);
                break;
            }
        }
        
        return n;
    }
};

// Approach 2: Bit property
class Solution2 {
  public:
    int setBit(int n) {
        return (n | (n+1));
    }
};