// GeeksforGeeks Problem : Move All Zeroes to the End of Array
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
// Approach : 2 pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                j = i;
                break;
            } 
        }
        
        if(j != -1) {
            for(int i = j + 1; i < n; i++) {
                if(arr[i] != 0) {
                    swap(arr[j], arr[i]);
                    j++;
                }
            } 
        }
    }
};