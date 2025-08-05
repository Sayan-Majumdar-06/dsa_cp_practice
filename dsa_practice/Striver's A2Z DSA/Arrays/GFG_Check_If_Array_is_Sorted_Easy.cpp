// GeeksforGeeks Problem : Check if Array is Sorted
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// Approach : Iterating

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        
        for(int i = 0; i < arr.size()-1; i++) {
            if(arr[i] > arr[i+1]) {
                return false;
            }
        }
        
        return true;
    }
};