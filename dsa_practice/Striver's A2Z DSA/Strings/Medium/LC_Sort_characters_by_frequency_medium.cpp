// Leetcode Problem : Sort Characters by Frequency
// Difficulty : Medium
// Link : https://leetcode.com/problems/sort-characters-by-frequency/
// Approach : Hashing

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char, int> hash;
        string ans = "";

        for(int i = 0; i < s.length(); i++) {
            hash[s[i]]++;
        }

        vector<pair<int,char>> v;

        for(auto &p : hash) {
            v.push_back({p.second, p.first});
        }

        sort(v.begin(), v.end(), greater<>());

        for(auto &p : v) {
            ans.append(p.first, p.second);
        }

        return ans;
    }
};