// Leetcode problem : Assign Cookies
// Difficulty : Easy
// Link : https://leetcode.com/problems/assign-cookies
// Approach : Greedy (sorting)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int ptr = 0;
        int cnt = 0;

        for(int i = 0; i < (int)g.size(); i++) {
            while(ptr < (int)s.size() && s[ptr] < g[i]) ptr++;

            if(ptr == (int)s.size()) break;

            cnt++;
            ptr++;
        }

        return cnt;
    }
};