// GeeksforGeeks Problem : Counting Frequencies of Array elements
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
// Approach : Hashing array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        vector<int> hash(arr.size(), 0);
        for(auto i : arr) {
            hash[i - 1]++;
        }
        
        return hash;
    }
};
