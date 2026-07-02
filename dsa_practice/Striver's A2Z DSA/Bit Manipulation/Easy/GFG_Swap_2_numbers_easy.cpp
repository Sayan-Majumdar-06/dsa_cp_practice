// GeeksforGeeks problem : Swap the numbers
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/swap-the-numbers/1
// Approach : Bit property

#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
