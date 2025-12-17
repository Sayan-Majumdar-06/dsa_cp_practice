// Leetcode Problem : Majority Element II (> n/3)
// Difficulty : Medium
// Link : https://leetcode.com/problems/majority-element-ii/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<climits>
#include<math.h>
using namespace std;

// Approach 1 : Better : Hashing -> TC : O(N) / O(NlogN), SC : O(N);
class Solution1{
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> hash;
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            hash[nums[i]]++;
            if(hash[nums[i]] == (floor(n/3)+1)) {
                ans.push_back(nums[i]);
            }

            if(ans.size() == 2) {
                break;
            }
        }

        return ans;
    }
};

// Approach 2 : Optimal (Boyer-Moore's Algorithm - modified Moore's voting algorithm) -> TC : O(N), SC : O(1);
class Solution2 {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        long long el1 = LLONG_MAX, el2 = LLONG_MAX, cnt1 = 0, cnt2 = 0;

        for(int i = 0; i < n; i++) {
            if(cnt1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                cnt1 = 1;
            }

            else if(cnt2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                cnt2 = 1;
            }

            else if(el1 == nums[i]) {
                cnt1++;
            }

            else if(el2 == nums[i]) {
                cnt2++;
            } 

            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0, cnt2 = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == el1) {
                cnt1++;
                if(cnt1 == (floor(n/3)+1)) {
                    ans.push_back(el1);
                }
            }

            else if(nums[i] == el2) {
                cnt2++;
                if(cnt2 == (floor(n/3)+1)) {
                    ans.push_back(el2);
                }
            }

            if(ans.size() == 2) {
                break;
            }
        }

        return ans;
    }
};