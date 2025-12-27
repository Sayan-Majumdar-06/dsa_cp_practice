// Leetcode Problem : Merge Sorted Array
// Difficulty : Medium
// Link : https://leetcode.com/problems/merge-sorted-array/
// Approach : Gap method (shell sort)

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m; i < m+n; i++){
            nums1[i] = nums2[i-m];
        }

        int gap = ceil((m+n)*1.0/2);

        while(gap >= 1) {
            int left = 0, right = gap;
            while(right < m+n) {
                if(nums1[left] > nums1[right]) {
                    swap(nums1[left], nums1[right]);
                }
                left++;
                right++;
            }

            if(gap == 1) {
                break;
            } else {
                gap = ceil(gap * 1.0 / 2);
            }
        }
    }
};