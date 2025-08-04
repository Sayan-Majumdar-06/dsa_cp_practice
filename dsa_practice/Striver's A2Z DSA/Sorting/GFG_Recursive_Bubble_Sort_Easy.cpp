// GeeksforGeeks problem : Recursive Bubble Sort
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/bubble-sort/1
// Approach : Recursion, Bubble Sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        recur_bubbleSort(arr, arr.size());
    }
    
  private:
    void recur_bubbleSort(vector<int>& arr, int n) {
        if(n <= 1) {
            return;
        } 
        int swapped =0;
        for(int i = 0; i < n-1; i++) {
            if(arr[i] > arr[i+1]) {
                swapped = 1;
                swap(arr[i], arr[i+1]);
            }
        }
        
        if(swapped == 0) {
            return;
        } else {
            --n;
            recur_bubbleSort(arr, n);
        }
    }
};