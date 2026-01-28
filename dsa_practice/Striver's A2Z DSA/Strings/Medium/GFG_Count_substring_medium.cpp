// GeeksforGeeks problem : Count Substrings
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/count-substring/1
// Approach : Last seen index technique

#include<iostream>
using namespace std;

class Solution {
  public:
    int countSubstring(string s) {
        int ans = 0;
        int found_a = -1, found_b = -1, found_c = -1;
        int n = s.length();
        
        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') found_a = i;
            else if(s[i] == 'b') found_b = i;
            else if(s[i] == 'c') found_c = i;
            
            if(found_a >= 0 && found_b >= 0 && found_c >= 0) {
               int temp = min(found_a, found_b);
               temp = min(temp, found_c);
               
               ans += (temp + 1);
            }
        }
        
        return ans;
    }
};