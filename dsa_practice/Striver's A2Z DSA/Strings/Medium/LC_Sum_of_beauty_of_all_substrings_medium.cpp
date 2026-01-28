// Leetcode Problem : Sum of beauty of all substrings
// Difficulty : Medium
// Link : https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
// Approach : optimised brute force

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            vector<int> freq(26, 0);

            for(int j = i; j < n; j++) {
                freq[s[j]-'a']++;

                int min_freq = n, max_freq = 1;

                for(int k = 0; k < 26; k++) {
                    if(freq[k] > 0) {
                        max_freq = max(max_freq, freq[k]);
                        min_freq = min(min_freq, freq[k]);
                    }
                }

                ans += max_freq - min_freq;
            }
        }

        return ans;
    }
};