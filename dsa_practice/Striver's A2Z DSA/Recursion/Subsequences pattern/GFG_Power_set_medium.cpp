// Geeksforgeeks Problem : All subsequences of a string
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/power-set4302/1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1: Recursion

class Solution1 {
  private: 
    void generate(int idx, int n, string &s, string str, vector<string> &res) {
        if(idx == n) {
            res.push_back(str);
            return;
        }
        
        //take
        generate(idx+1, n, s, str+s[idx], res);
        
        //don't take
        generate(idx+1, n, s, str, res);
    }
    
  public:
    vector<string> powerSet(string &s) {
        int n = s.size();
        vector<string> res;
        generate(0, n, s, "", res);
        
        sort(res.begin(), res.end());
        return res;
    }
};

// Approach 2: Bit masking        

class Solution2 {
    
  public:
    vector<string> powerSet(string &s) {
        int n = s.size();
        vector<string> res;
        
        for(int i = 0; i < (1<<n); i++) {
            string str = "";
            for(int j = 0; j < n; j++) {
                if((i & (1 << j)) != 0) str += s[j];
            }
            
            res.push_back(str);
        }
        
        sort(res.begin(), res.end());
        
        return res;
    }
};