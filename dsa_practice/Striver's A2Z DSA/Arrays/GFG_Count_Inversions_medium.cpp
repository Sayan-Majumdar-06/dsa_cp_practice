 // GeeksforGeeks Problem : Count Inversions
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
// Approach : merge sort, TC - O(nlogn), SC - O(n)

#include<iostream>
#include<vector>
using namespace std;

 class Solution {
  public:
    int merge_count(vector<int> &a, int low, int mid, int high){
        int ans = 0;
        vector<int> temp;
        int left = low, right = mid+1;
        
        while(left <= mid && right <= high) {
            if(a[left] <= a[right]) {
                temp.push_back(a[left]);
                left++;
            } else {
                ans += (mid - left + 1);
                temp.push_back(a[right]);
                right++;
            }
        }
        
        while(left <= mid) {
            temp.push_back(a[left]);
            left++;
        }
        
        while(right <= high) {
            temp.push_back(a[right]);
            right++;
        }
        
        for(int i = low; i <= high; i++) {
            a[i] = temp[i-low];
        }
        
        return ans;
    }
        
      int merge_sort(vector<int> &a, int low, int high) {
          int ans = 0;
          
            if(low >= high) {
                return ans;
            }
            
            int mid = (low + high)/2;
            
            ans += merge_sort(a, low, mid);
            ans += merge_sort(a, mid+1, high);
            ans += merge_count(a, low, mid, high);
            
            return ans;
        }
        
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        return merge_sort(arr, 0, n-1);
    }
};