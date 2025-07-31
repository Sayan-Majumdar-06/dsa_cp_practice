// GeeksforGeeks problem : Bubble Sort
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/bubble-sort/1
// Approach : Bubble Sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; i++) {
            for(int j = 0; j < arr.size()-i-1; j++) {
                if(arr[j + 1] < arr[j]) {
                    swap(arr[j+1], arr[j]);
                }
            }
        }
    }
};