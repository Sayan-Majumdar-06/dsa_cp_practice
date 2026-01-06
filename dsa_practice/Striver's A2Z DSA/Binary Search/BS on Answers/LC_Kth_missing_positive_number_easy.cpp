// Leetcode Problem : Kth missing positive number
// Difficulty : Easy
// Link : https://leetcode.com/problems/kth-missing-positive-number/
// Approach : binary search on answer

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0, r = n-1;

        while(l <= r) {
            int mid = l + (r-l)/2;

            int missing = arr[mid] - (mid + 1);

            if(missing < k) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        int finalMissing = k + r + 1;
        return finalMissing;
    }
};