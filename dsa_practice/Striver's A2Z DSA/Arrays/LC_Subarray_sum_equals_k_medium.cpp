// Leetcode Problem : Subarray Sum Equals K
// Difficulty : Medium
// Link : https://leetcode.com/problems/subarray-sum-equals-k/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Approach 1: Brute-force -> TC : O(N x N) ; SC : O(1)
class Solution1 {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                if(sum == k) {
                    ans++;
                }
            }
        }

        return ans;
    }
};

// Approach 2: Optimal -> TC : O(N x N) for rare worst case, O(N) for best and average cases; SC : O(N)
class Solution2 {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        mpp[0] = 1;

        int presum = 0, cnt = 0;

        for(int i = 0; i < n; i++) {
            presum += nums[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }

        return cnt;
    }
};