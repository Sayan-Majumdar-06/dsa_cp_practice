// Leetcode Problem : Pascal's Triangle
// Difficulty : Easy
// Link : https://leetcode.com/problems/pascals-triangle/
// Approach : Optimal -> TC : O(N*N); SC : O(N*N)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int nCr(int n, int r) {
        float ans = 1;
        while(r > 0) {
            ans = ans * (n*1.0 / r);
            n--;
            r--;
        }

        return (int)ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 1; i <= numRows; i++) {
            vector<int> currrow(i, 1);
            int temp = 1;
            for(int j = 2; j < i; j++) {
                int num = (i - j + 1);
                int den = (j-1);

                currrow[j-1] = temp * num;
                currrow[j-1] /= den;
                temp = currrow[j-1];
            }

            ans.push_back(currrow);
        }

        return ans;
    }
};