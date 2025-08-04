// GeeksforGeeks problem : Recursive Insertion Sort
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/insertion-sort/1
// Approach : Recursion, Insertion Sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        recur_InsertionSort(arr, 1);
    }
    
  private: 
    void recur_InsertionSort(vector<int> &arr, int i) {
        if(i == arr.size()) {
            return;
        }
        
        int key = arr[i];
        int j = i - 1;
            
        while(arr[j] > key && j >= 0) {
            arr[j+1] = arr[j];
            j--;
        }
            
        arr[j+1] = key;
        
        recur_InsertionSort(arr, i+1);
    }
};