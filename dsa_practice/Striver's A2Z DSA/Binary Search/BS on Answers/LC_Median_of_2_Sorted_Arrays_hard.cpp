// Leetcode Problem : Median of 2 sorted arrays
// Difficulty : Hard
// Link : https://leetcode.com/problems/median-of-two-sorted-arrays/
// Approach : binary search on answer

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();

        if(m > n) return findMedianSortedArrays(nums2, nums1);

        int l = 0;
        int r = m;

        int k = (m+n+1)/2;

        while(l <= r) {
            int mid1 = l + (r-l)/2;
            int mid2 = k - mid1;

            int l1 = INT_MIN, r1 = INT_MAX, l2 = INT_MIN, r2 = INT_MAX;

            if(mid1 < m) r1 = nums1[mid1];
            if(mid2 < n) r2 = nums2[mid2];

            if(mid1 >= 1) l1 = nums1[mid1-1];
            if(mid2 >= 1) l2 = nums2[mid2-1];

            if(l1 <= r2 && l2 <= r1) {
                if((m+n) % 2 == 1) return (max(l1, l2));
                else return (((double)max(l1, l2) + (double)min(r1, r2))/ 2.0);
            } else if (l1 > r2) {
                r = mid1-1;
            } else {
                l = mid1+1;
            }
        }

        return 0.0;
    }   
};