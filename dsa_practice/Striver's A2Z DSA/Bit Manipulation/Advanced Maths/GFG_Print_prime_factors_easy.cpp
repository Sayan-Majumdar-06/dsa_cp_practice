// GeeksforGeeks problem : Print all prime factors of a number in sorted order
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/prime-factorization/1
// Approach : Bit property & math

#include<iostream>
using namespace std;

void printPrimeFactorization(int n) {
    
    while((n & 1) == 0) {
        cout << 2 << " ";
        n >>= 1;
    }
    
    for(int i = 3; i*i <= n; i+=2) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i;
        }   
    }
    
    if(n != 1) cout << n;
}