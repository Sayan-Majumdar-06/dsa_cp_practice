// GeeksforGeeks Problem : Second Largest
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/second-largest3735/1
// Approach 1 : Brute-force (using STL (sets))

#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> st;
        
        for(int i = 0; i < a.size(); i++) {
            st.insert(a[i]);
        }
        
        for(int i = 0; i < b.size(); i++) {
            st.insert(b[i]);
        }
        
        auto it = st.begin();
        vector<int> u(st.size());
        
        for(int i = 0; i < st.size(); i++) {
            u[i] = *it;
            it++;
        }
        
        return u;
    }
};

// Approach 2 : 2-pointer

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> u;
        
        long long prev = INT32_MAX;
        
        while(i < a.size() && j < b.size()) {
            if(a[i] <= b[j]) {
                if(a[i] != prev) {
                    u.push_back(a[i]);
                    prev = a[i];
                }
                
                i++;
            } else {
                if(b[j] != prev) {
                    u.push_back(b[j]);
                    prev = b[j];
                }
                
                j++;
            }
        }
        
        while(i < a.size()) {
            if(a[i] != prev) {
                u.push_back(a[i]);
                prev = a[i];
            }
            i++;
        }
        
        while(j < b.size()) {
            if(b[j] != prev) {
                u.push_back(b[j]);
                prev = b[j];
            }
            
            j++;
        }
        
        return u;
    }
};