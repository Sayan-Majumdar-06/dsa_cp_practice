// GeeksforGeeks Problem : Minimise maximum distance to gas station
// Difficulty : Hard
// Link : https://www.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1

// Approach 1 : Priority Queue (TC -> O(NlogN + KlogN), SC -> O(N-1))

#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<math.h>
#include<climits>
using namespace std;

class Solution1 {
  public:
    double minMaxDist(vector<int> &stations, int K) {
        int n = stations.size();
        vector<int> howMany(n-1, 0);
        priority_queue<pair<long double, int>> pq;
        
        for(int i = 0; i < n-1; i++) {
            long double diff = stations[i+1] - stations[i];
            pq.push({diff, i});
        }
        
        if(pq.size() == 0) return (long double)(0);
        
        for(int i = 1; i <= K; i++) {
            auto tp = pq.top();
            pq.pop();
            int secInd = tp.second;
        
            // Insert at highest difference
            howMany[secInd]++;
        
            //calculate new section length
            long double initialDiff = stations[secInd+1] - stations[secInd];
            long double newSecLen = initialDiff / (long double) (howMany[secInd]+1);
        
            pq.push({newSecLen, secInd});
        }
        
        return pq.top().first;
    }
};

// Approach 2 : Binary Search on answer (TC -> O(N + Nlog(max_diff - 1e-6)), SC -> O(1))
class Solution2 {
    private:
        bool canPlace(vector<int> &a, long double diff, int k) {
            int cnt = 0;
            
            for(int i = 0; i < a.size()-1; i++) {
                long double curr_diff = a[i+1] - a[i];
                
                if(floor(curr_diff / diff) * diff == curr_diff) {
                    cnt += floor(curr_diff / diff) - 1;
                } else {
                    cnt += floor(curr_diff / diff);
                }
            }
            
            return (cnt > k);
        }

    public:
        double minMaxDist(vector<int> &stations, int K) {
            int n = stations.size();
            int max_diff = INT_MAX;
            
            for(int i = 0; i < n-1; i++) {
                int diff = stations[i+1] - stations[i];
                max_diff = max(max_diff, diff);
            }
            
            long double l = 0, r = max_diff;
            long double ans = 0;
            
            while(r - l > 1e-6) {
                long double mid = l + (r-l) / (long double)(2);
                
                if(canPlace(stations, mid, K)) {
                    l = mid;
                } else {
                    ans = r;
                    r = mid;
                }
            }
            
            return ans;
        }
};