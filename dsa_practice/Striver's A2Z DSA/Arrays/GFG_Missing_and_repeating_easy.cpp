// GeeksforGeeks Problem : Missing and Repeating
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
// Approach : Math

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();

        long long sum1 = 0;
        
        for(int i = 0; i < n; i++){
            sum1 += (long long)arr[i];
        }
        
        long long sumn = (n*(n+1)/2);
        
        long long rem1 = sum1 - sumn;
        
        long long sum2 = 0;
        
        for(int i = 0; i < n; i++){
            sum2 += ((long long)arr[i]* (long long)arr[i]);
        }
        
        long long sum2n = ((n*(n+1)*((2*n)+1))/6);
        long long rem2 = sum2 - sum2n;
    
        long long rep = (rem1 + (rem2/rem1))/2;
        long long mis = (rep - rem1);
        
        return {(int)rep, (int)mis};
    }
};