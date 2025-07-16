// First Problem (DIV 4)
// link : https://www.codechef.com/START195D/problems/MARBCOLL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    sort(a.begin(), a.end());
	    
	    for(int i = 1; i < n; i++) {
	        if(a[i] != a[i-1]) {
	            m--;
	        }
	    }
	    
	    cout << m-1 << "\n";
	}
}
