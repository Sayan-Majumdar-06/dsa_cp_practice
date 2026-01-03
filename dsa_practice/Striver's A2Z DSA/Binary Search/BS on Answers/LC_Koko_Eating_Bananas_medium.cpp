// Leetcode Problem : Koko Eating Bananas
// Difficulty : Medium
// Link : https://leetcode.com/problems/koko-eating-bananas/
// Approach : binary search on answer

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

class Solution {
private:
    long long reqdTime(vector<int>& a, int k) {
        long long reqd = 0;

        for(int i = 0; i < a.size(); i++) {
            reqd += ceil(a[i]*1.0/k);
        }

        return reqd;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long r = *max_element(piles.begin(), piles.end());
        long long l = 1;

        while(l <= r) {
            long long mid = l + (r-l)/2;
            if(reqdTime(piles, mid) > h) {
                l = mid+1;
            } 

            else if(reqdTime(piles, mid) <= h){
                r = mid-1;
            }   
        }

        return l;
    }
};