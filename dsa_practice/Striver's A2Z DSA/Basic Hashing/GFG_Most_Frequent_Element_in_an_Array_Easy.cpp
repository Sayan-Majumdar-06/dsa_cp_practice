// GeeksforGeeks Problem : Most Frequent Element in an Array
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/most-frequent-element-in-an-array/1
// Approach : Hashing map

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        int n = arr.size();
        
        map <int, int> hash;
        
        for(int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }
        
        auto it = max_element(hash.begin(), hash.end(), [](const auto& p1, const auto& p2) {
                                       return p1.second < p2.second;
                                   });
        int max_freq = it -> second;
        int maximum = -1e5;
        
        for(auto &it : hash) {
            if(it.second == max_freq) {
                maximum = max(maximum, it.first);
            }
        }
        
        return maximum;
    }
};