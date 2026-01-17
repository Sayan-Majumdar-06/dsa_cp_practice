// Leetcode Problem : Search a 2D Matrix II
// Difficulty : Medium
// Link : https://leetcode.com/problems/search-a-2d-matrix-ii/
// Approach : binary search-like elimination on 2D array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = 0, col = m-1;

        while(row <= n-1 && col >= 0) {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) row++;
            else if(matrix[row][col] > target) col--;
        }

        return false;
    }
};