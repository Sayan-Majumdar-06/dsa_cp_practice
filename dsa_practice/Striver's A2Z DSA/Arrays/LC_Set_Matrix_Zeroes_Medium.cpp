// Leetcode Problem : Set Matrix Zeroes
// Difficulty : Medium
// Link : https://leetcode.com/problems/set-matrix-zeroes/

#include<iostream>
#include<vector>
using namespace std;

// Approach 1: Better -> TC : O(m*n), SC : O(m) + O(n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();

        vector<int> marked_rows(m, 0), marked_cols(n, 0);

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    marked_rows[i] = 1;
                    marked_cols[j] = 1;
                }
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(marked_rows[i] == 1 || marked_cols[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Approach 2: Optimal -> TC : O((m*n) + (m-1)*(n-1) + (m+n)), SC : O(1) 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        int col0 = 1;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    if(j == 0) {
                        col0 = 0;
                    } else {
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
        }

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    if(matrix[i][j] != 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        
        for(int j = 0; j < n; j++) {
            if(matrix[0][0] == 0) {
                matrix[0][j] = 0;
            }
        }

        for(int i = 0; i < m; i++) {
            if(col0 == 0) {
                matrix[i][0] = 0;
            }
        }
    }
};