// Leetcode Problem : Capacity to ship packages within d days
// Difficulty : Medium
// Link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// Approach : binary search on answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    int noOfDays(vector<int>& a, int capacity) {
        int s = 0;
        int days = 0;

        for(int i = 0; i < a.size(); i++) {
            if(s + a[i] <= capacity) {
                s += a[i];
            } else {
                days++;
                s = a[i];
            }
        }

        if(s <= capacity) {
            days++;
        }

        return days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for(int i = 0; i < weights.size(); i++) {
            sum += weights[i];
        }

        int l = *max_element(weights.begin(), weights.end());
        int r = sum;

        while(l <= r) {
            int mid = l + (r-l)/2;
            int n = noOfDays(weights, mid);

            if(n > days) {
                l = mid+1;
            } else if(n <= days) {
                r = mid-1;
            }
        }

        return l;
    }
};