// GeeksforGeeks problem : Print all divisors of a number in sorted order
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1
// Approach : Math

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector<int> ans1;
        vector<int> ans2;
        
        for(int i = 1; i*i <= n; i++) {
            if(n % i == 0) {
                ans1.push_back(i);
                
                int other = n / i;
                
                if(other != i) ans2.push_back(other);
            }
        }
        
        reverse(ans2.begin(), ans2.end());
        
        for(int x: ans2) ans1.push_back(x);
        
        return ans1;
    }
};