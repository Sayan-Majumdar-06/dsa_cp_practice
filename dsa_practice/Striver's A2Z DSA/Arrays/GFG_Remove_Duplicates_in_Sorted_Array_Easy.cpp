// GeeksforGeeks Problem : Remove Duplicates in Sorted Array
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
// Approach : 2-pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        int j = 0;
        for(int i = 1; i < n; i++) {
            if(arr[j] != arr[i]) {
               j++;
               arr[j] = arr[i];
            }
        }
        
        arr.erase(arr.begin()+j+1, arr.end());
        return arr;
    }
};