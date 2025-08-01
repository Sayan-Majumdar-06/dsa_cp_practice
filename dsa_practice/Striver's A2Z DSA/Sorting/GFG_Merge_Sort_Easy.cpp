// GeeksforGeeks problem : Merge Sort
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/merge-sort/1
// Approach : Merge Sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // DIVIDE
        // base condition
        if(l >= r) {
            return;
        } 
        
        int mid = l + (r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        
        // MERGE
        vector<int> temp;
        int left = l;
        int right = mid+1;
        
        while(left <= mid && right <= r) {
            if(arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= r) {
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i = l; i <= r; i++) {
            arr[i] = temp[i-l];
        }
    }
};