// GeeksforGeeks Problem : Book Allocation Problem
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// Approach : Binary Search on Answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    private:
        bool canWeAllocate(vector<int>& a, int pages, int k) {
            int pages_sum = a[0];
            int student_cnt = 1;
            
            for(int i = 1; i < a.size(); i++) {
                if(pages_sum + a[i] <= pages) {
                    pages_sum += a[i];
                } else {
                    student_cnt++;
                    pages_sum = a[i];
                }
            }
            
            return (student_cnt <= k);
        }
        
  public:
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size()) return -1;
        
        int n = arr.size();
        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        int l = *max_element(arr.begin(), arr.end()), r = sum;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(canWeAllocate(arr, mid, k))  {
                r = mid-1;
            }
            
            else {
                l = mid+1;
            }
        }
        
        return l;
    }
};