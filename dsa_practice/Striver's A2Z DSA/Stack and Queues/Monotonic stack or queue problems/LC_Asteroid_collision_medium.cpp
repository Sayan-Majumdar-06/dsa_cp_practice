// Leetcode problem : Asteroid Collision
// Difficulty : Medium
// Link : https://leetcode.com/problems/asteroid-collision/
// Approach: Monotonic stack

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(asteroids[i] > 0) {
                ans.push_back(asteroids[i]);
            }

            else {
                while(ans.size() && ans.back() > 0 && ans.back() < abs(asteroids[i])) {
                    ans.pop_back();
                }

                if(!ans.size() || ans.back() < 0) ans.push_back(asteroids[i]);

                else if(ans.size() && ans.back() == abs(asteroids[i])) ans.pop_back();
            }
        }

        return ans;
    }
};