// Leetcode Problem : Minimum number of days to make m bouquets
// Difficulty : Medium
// Link : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
// Approach : binary search on answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    int noOfBouquets(vector<int>& a, int x, int k) {
        int cnt = 0, bouquets = 0;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] <= x) {
                cnt++;
            } else {
                bouquets += (cnt / k);
                cnt = 0;
            }
        }
        bouquets += (cnt / k);
        return bouquets;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()){
            return -1;
        }

        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());

        while(l <= r) {
            int mid = l + (r-l)/2;
            int bouquets = noOfBouquets(bloomDay, mid, k);

            if(bouquets >= m) {
                r = mid-1;
            }

            else if(bouquets < m) {
                l = mid+1;
            }
        }

        return l;
    }
};