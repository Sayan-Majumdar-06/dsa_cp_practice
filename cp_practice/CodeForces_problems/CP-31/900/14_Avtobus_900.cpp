// Problem : Avtobus (CodeForces)
// Rating : 900
// Problem link : https://codeforces.com/problemset/problem/1679/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n < 4 || n % 2 == 1)
            cout << -1 << '\n';
        else
        {
            long long min_buses = ceil(n * 1.0 / 6);
            long long max_buses = n / 4;
            cout << min_buses << " " << max_buses << '\n';
        }
    }
    return 0;
}