// GeeksforGeeks Problem : Largest Element in Array
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// Approach : Iterating and swapping

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest = arr[0];
        
        for(auto i : arr) {
            largest = max(largest, i);
        }
        
        return largest;
    }
};
