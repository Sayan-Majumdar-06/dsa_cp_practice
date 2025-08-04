// GeeksforGeeks Problem : Second Largest
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/second-largest3735/1
// Approach : Iterating and swapping

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;
        
        for(auto i : arr) {
            largest = max(i, largest);
        }
        
        int second_largest = INT_MIN;
        
        for(auto i : arr) {
            if(i < largest) {
                second_largest = max(i, second_largest);
            }
        }
        
        if(second_largest == INT_MIN) {
            return -1;
        }
        
        return second_largest;
    }
};