// Leetcode Problem : Reverse Pairs
// Difficulty : Hard
// Link : https://leetcode.com/problems/reverse-pairs/
// Approach : merge sort

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int merge_count(vector<int> &a, int low, int mid, int high){
        int ans = 0;
        vector<int> temp;
        int left = low, right = mid+1;
        int j = mid+1;
        for(int i = low; i <= mid; i++) {
            while(j <= high && (long long)a[i] > 2LL * a[j]) {
                j++;
            }
            ans += (j - (mid + 1));
        }

        while(left <= mid && right <= high) {
            if(a[left] <= a[right]) {
                temp.push_back(a[left]);
                left++;
            } else {
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
    
    int reversePairs(vector<int>& nums) {
        int n = nums.size();

        return merge_sort(nums, 0, n-1);
    }
};