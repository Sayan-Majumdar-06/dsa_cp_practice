// GeeksforGeeks problem : Insertion Sort
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/insertion-sort/1
// Approach : Insertion Sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        for(int i = 1; i < arr.size(); i++) {
            int curr = arr[i];
            int prev = i - 1;
            
            while(prev >= 0 && arr[prev] > curr){
                arr[prev+1] = arr[prev];
                prev--;
            }
            
            arr[prev+1] = curr;
        }
    }
};