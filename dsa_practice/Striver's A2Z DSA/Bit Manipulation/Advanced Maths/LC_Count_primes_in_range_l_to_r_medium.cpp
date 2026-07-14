// Leetcode problem : Count primes
// Difficulty : Medium
// Link : https://leetcode.com/problems/count-primes/
// Approach : Sieve of Eratosthenes

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {

        vector<int> primes(n+1, 1);

        primes[0] = 0;
        if(n > 0) primes[1] = 0;

        for(int i = 2; i*i <= n; i++) if(primes[i]) for(int j = i*i; j <= n; j+=i) primes[j] = 0;

        int cnt = 0;

        for(int i = 2; i < n; i++) if(primes[i]) cnt++;

        return cnt;
    }
};
