// Leetcode problem : Lemonade Change
// Difficulty : Easy
// Link : https://leetcode.com/problems/lemonade-change
// Approach : Greedy

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;

        for(int i = 0; i < (int)bills.size(); i++) {
            if(bills[i] == 5) fives++;
            else if(bills[i] == 10) {
                tens++;
                if(fives == 0) return false;
                fives--;
            }

            else if(bills[i] == 20) {
                if(tens > 0 && fives >= 1) {
                    tens--;
                    fives--;
                    continue;
                }

                if(fives >= 3) {
                    fives -= 3;
                    continue;
                }

                return false;
            }
        }

        return true;
    }
};