// GeeksforGeeks problem : Selection Sort
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/selection-sort/1
// Approach : Selection Sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        
       for(int i = 0; i < arr.size()-1; i++) {
           int smallest_idx = i;
           for(int j = i+1; j < arr.size(); j++) {
               if(arr[j] < arr[smallest_idx]) {
                   smallest_idx = j;
               }
           }
           
           swap(arr[i], arr[smallest_idx]);
       } 
    }
};