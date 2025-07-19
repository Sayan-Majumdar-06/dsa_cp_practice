// GeeksforGeeks Problem : All Divisors of a Number
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

#include<iostream>
#include<set>
#include<math.h>

using namespace std;

class Solution {
  public:
    void print_divisors(int n) {
        set<int> divisors_gr;
        
        for(int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                cout << i << " ";
                
                if(i != n/i) {
                    divisors_gr.insert(divisors_gr.end(), n/i);
                }
            }
        }
        
        for(auto x : divisors_gr) {
            cout << x << " ";
        }
    }
};