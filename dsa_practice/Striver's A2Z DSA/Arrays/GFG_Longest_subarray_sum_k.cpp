// GeeksforGeeks Problem : Longest Subarray with sum k
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1


// Both positive and negative
// Approach : hashmap, TC - O(n^2), SC - O(n)
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution1 {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int len = 0;
        int sum = 0;
        
        map<int, int> hash;
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            if(sum == k) {
                len = i+1;
            } 
            
            int rem = sum - k;
            if(hash.find(rem) != hash.end()) {
                len = max(len, i - hash[rem]);
            }
            
            if(hash.find(sum) == hash.end()) {
                hash[sum] = i;
            }
        }
        
        return len;
    }
};

//only positive
// Approach : 2 pointer, TC - O(2n), SC - O(1)

class Solution2 {
public:
    int longestSubarray(vector<int> &nums, int k){
        int i = 0, j = 0;
        int sum = nums[0];
        int len = 0;

        while(j < nums.size()) {
            while(i <= j && sum > k) {
                sum -= nums[i];
                i++;
            }

            if(sum == k) {
                len = max(len, j - i + 1);
            }

            j++;
            if(j < nums.size()) {
                sum += nums[j];
            }
        }

        return len;
    }
};

