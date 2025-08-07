// GeeksforGeeks Problem : Cyclically Rotate an Array by One
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// Approach : 2 pointer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int temp = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            int temp2 = arr[i];
            arr[i] = temp;
            temp = temp2;
        }
        
        arr[0] = temp;
    }
};