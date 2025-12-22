// GeeksforGeeks Problem : Count Subarrays with given XOR
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1
// Approach : Optimal -> hashing (TC -> O(NlogN), SC -> O(N))

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        
        long long prexor = 0, cnt = 0;
        mpp[0] = 1;
        
        for(int i = 0; i < n; i++) {
            prexor = prexor ^ arr[i];
            
            long long remove = (prexor ^ k);
            
            cnt += mpp[remove];
            
            mpp[prexor] += 1;
        }
        
        return cnt;
    }
};