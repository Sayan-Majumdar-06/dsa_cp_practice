#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_arr(int i, vector<int> a) {
    int n = a.size();
    if(i > n/2) {
        return a;
    }

    swap(a[i], a[n-1-i]);
    return reverse_arr(++i, a);
}

int main() {
    vector<int> a = {1,2,3,4,5};

    a = reverse_arr(0, a);

    for(auto x : a) {
        cout << x << " ";
    }
    cout << "\n";

}