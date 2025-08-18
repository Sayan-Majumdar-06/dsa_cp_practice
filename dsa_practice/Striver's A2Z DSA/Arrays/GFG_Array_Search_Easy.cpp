// GeeksforGeeks Problem : Array Search
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
// Approach : Linear Search

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int idx = -1;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == x) {
                idx = i;
                break;
            }
        }
        
        return idx;
    }
};