// Leetcode Problem : Find the smallest divisor given a threshold
// Difficulty : Medium
// Link : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
// Approach : binary search on answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {

private:
    long long sum(vector<int>& a, int divisor) {
        long long s = 0;

        for(int i = 0; i < a.size(); i++) {
            s += ((a[i] + divisor - 1) / divisor);
        }

        return s;
    }
    
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());

        while(l <= r) {
            int mid = l + (r-l)/2;

            if(sum(nums, mid) > threshold) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        return l;
    }
};