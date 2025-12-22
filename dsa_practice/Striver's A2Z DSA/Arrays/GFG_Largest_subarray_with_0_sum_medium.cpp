// GeeksforGeeks Problem : Largest Subarray with 0 sum
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
// Approach : Optimal -> hashing (TC -> O(NlogN), SC -> O(N))

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        unordered_map<int, int> hash;
        int max_length = 0;
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            if(sum == 0) {
                max_length = i+1;
            } else {
                if(hash.find(sum) != hash.end()) {
                    int found_idx = (hash.find(sum))->second;
                    max_length = max(max_length, i - found_idx);
                } else {
                    hash[sum] = i;
                }
            }
        }
        
        return max_length;
    }
};